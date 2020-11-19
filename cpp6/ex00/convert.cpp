/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:01:27 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/19 12:40:16 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <climits>
#include <float.h>

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

static void	print_int(double const &value)
{
	if (value >= INT_MIN && value <= INT_MAX)
			std::cout << "int   : " << static_cast<int>(value) << std::endl;
		else
			std::cout << "int   : impossible" << std::endl;
}

static void	print_char(double const &value)
{
	if (value >= ASCII_MIN_PRINTABLE && value <= ASCII_MAX_PRINTABLE)
		std::cout << "char  : '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "char  : Non displayable" << std::endl;
}

static void	print_float(std::string str, double const &value)
{
	if ((abs(value) >= FLT_MIN && abs(value) <= FLT_MAX) ||
	value == 0 || is_float_exception(str)) 
	{
		if (value < 99999)
			std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
		else
			std::cout << "float : " << std::scientific << static_cast<float>(value) << "f" << std::endl;
	}
	else
		std::cout << "float : impossible" << std::endl;
}

static void	print_double(double const &value)
{
	if (value < 99999)
		std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
	else
		std::cout << "double: " << value << std::endl;
}

void		convert(std::string str)
{
	double	value;

	if (is_char(str) == true)
		value = static_cast<double>(str[0]);
	else
		value = atof(str.c_str());
	if (is_float_exception(str) == true)
	{
		std::cout << "char  : impossible" << std::endl;
		std::cout << "int   : impossible" << std::endl;
	}
	else
	{
		print_char(value);
		print_int(value);
	}
	print_float(str, value);
	print_double(value);
}
