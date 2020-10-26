/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:01:27 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/26 17:31:13 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#define ASCII_MIN_PRINTABLE 33
#define ASCII_MAX_PRINTABLE 126

static bool	is_char(std::string str)
{
	if (str.length() == 1 &&
		str[0] >= ASCII_MIN_PRINTABLE && str[0] <= ASCII_MAX_PRINTABLE &&
		!(str[0] >= '0' && str[0] <= '9'))
		return (true);
	return (false);
}

bool	is_float_exception(std::string str)
{
	if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0 ||
		str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0)
		return (true);
	return (false);
}

void		convert(std::string str)
{
	double	value;
	bool	float_exception;

	float_exception = is_float_exception(str);
	if (is_char(str) == true)
		value = static_cast<double>(str[0]);
	else
		value = atof(str.c_str());
	if (is_float_exception(str) == true)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (value >= ASCII_MIN_PRINTABLE && value <= ASCII_MAX_PRINTABLE)
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
}
