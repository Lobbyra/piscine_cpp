/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:18:29 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/04 16:11:53 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int		main(int argc, char **argv)
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(56);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp << std::endl;

	Span sp2 = Span(sp);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	int arr[] = {67, 623, 43, 23, 2345, 14, 103, 10};
	Span sp3 = Span(arr, arr + sizeof(arr) / sizeof(int));
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	Span sp4 = Span(3);
	try
	{
		sp4.addNumber(3);
		sp4.addNumber(3);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span sp5 = Span(40000);

	for (int i = 0; i < 20000; i++)
	{
		sp5.addNumber(i);
	}
	std::cout << sp5.shortestSpan() << std::endl;
	std::cout << sp5.longestSpan() << std::endl;
	return (0);
}
