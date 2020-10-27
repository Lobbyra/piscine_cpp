/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:59:46 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 15:34:02 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#include <iostream>

int		main(int argc, char **argv)
{
	std::string	s1 = "ab";
	std::string	s2 = "ba";
	float		f1 = 156.5648;
	float		f2 = 42.4242;
	int			i1 = 10;
	int			i2 = 42;
	char		c1 = '5';
	char		c2 = '4';

	std::cout << "|-----MIN------|" << std::endl;
	std::cout << min<std::string>(s1, s2) << std::endl;
	std::cout << min<float>(f1, f2) << std::endl;
	std::cout << min<int>(i1, i2) << std::endl;
	std::cout << min<char>(c1, c2) << std::endl;
	std::cout << min<char>(c1, c1) << std::endl;
	std::cout << "|-----MAX------|" << std::endl;
	std::cout << max<std::string>(s1, s2) << std::endl;
	std::cout << max<float>(f1, f2) << std::endl;
	std::cout << max<int>(i1, i2) << std::endl;
	std::cout << max<char>(c1, c2) << std::endl;
	std::cout << max<char>(c1, c1) << std::endl;
	std::cout << s1 <<	\
	 ", " << s2 <<		\
	 ", " << f1 <<		\
	 ", " << f2 <<		\
	 ", " << i1 <<		\
	 ", " << i2 <<		\
	 ", " << c1 <<		\
	 ", " << c2 <<		\
	 ", " << std::endl;
	std::cout << "|-----SWAP-----|" << std::endl;
	swap(s1, s2);
	swap(f1, f2);
	swap(i1, i2);
	swap(c1, c2);
	std::cout << s1 <<	\
	 ", " << s2 <<		\
	 ", " << f1 <<		\
	 ", " << f2 <<		\
	 ", " << i1 <<		\
	 ", " << i2 <<		\
	 ", " << c1 <<		\
	 ", " << c2 <<		\
	 ", " << std::endl;
	return (0);
}
