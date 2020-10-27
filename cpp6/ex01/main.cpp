/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:36:05 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 11:57:10 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

int		main()
{
	Data *d1 = deserialize(serialize());
	Data *d2 = deserialize(serialize());
	Data *d3 = deserialize(serialize());
	Data *d4 = deserialize(serialize());

	std::cout << "|---- D1 ----|" << std::endl;
	std::cout << "s1 = " << d1->s1 << std::endl;
	std::cout << "n = " << d1->n << std::endl;
	std::cout << "s2 = " << d1->s2 << std::endl;
	std::cout << "|---- D2 ----|" << std::endl;
	std::cout << "s1 = " << d2->s1 << std::endl;
	std::cout << "n = " << d2->n << std::endl;
	std::cout << "s2 = " << d2->s2 << std::endl;
	std::cout << "|---- D3 ----|" << std::endl;
	std::cout << "s1 = " << d3->s1 << std::endl;
	std::cout << "n = " << d3->n << std::endl;
	std::cout << "s2 = " << d3->s2 << std::endl;

	delete d1;
	delete d2;
	delete d3;
	delete d4;
	return (0);
}
