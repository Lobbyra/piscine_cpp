/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:58:13 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/26 15:42:06 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define ASCII_MIN_PRINTABLE 33
#define ASCII_MAX_PRINTABLE 126

void	convert(std::string str);
bool	is_float_exception(std::string str);

static void	print_usage(void)
{
	std::cout << "convert: Wrong number of arguments" << std::endl;
	std::cout << "Usage: convert [number to convert]" << std::endl;
	std::cout << "    You can enter a char, an int, a float and a double." << std::endl;
}

static bool	str_is_convertible(std::string str)
{
	bool					dot_saw = false;
	bool					is_positive = true;
	std::string::iterator	it = str.begin();

	if (str.length() == 1 && str[0] >= ASCII_MIN_PRINTABLE && str[0] <= ASCII_MAX_PRINTABLE)
		return (true);
	while (it != str.end() && (it[0] == '+' || it[0] == '-'))
	{
		if (it[0] == '+')
			is_positive = true;
		else if (it[0] == '-')
			is_positive = false;
		it++;
	}
	if (isdigit(it[0]) == false)
		return (false);
	while (it != str.end())
	{
		if (isdigit(it[0]) == false)
		{
			if (it[0] == '.' && dot_saw == false)
				dot_saw = true;
			else if (it[0] == 'f' && it + 1 == str.end())
				return (true);
			else
				return (false);
		}
		it++;
	}
	return (true);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		print_usage();
		return (1);
	}
	if (str_is_convertible(argv[1]) == true || is_float_exception(argv[1]) == true)
		convert(argv[1]);
	else
		std::cerr << "String entered not convertible." << std::endl;
	return (0);
}
