/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 10:18:22 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/16 13:55:13 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	std::cout << "|=====CANONICAL DEMO======|" << std::endl;
	Fixed cpy_a(a);
	Fixed cpy_b;

	cpy_b = b;
	std::cout << a;
	std::cout << b;
	std::cout << "|=========================|" << std::endl;

	return 0;
}
