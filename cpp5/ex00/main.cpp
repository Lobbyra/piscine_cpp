/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:44:52 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/21 15:10:28 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	try
	{
		Bureaucrat jimmy("jimmy", 56);
		Bureaucrat jhon("jhon", 9);
		Bureaucrat candice("candice", 1);
		Bureaucrat johnatan("johnatan", 150);

		try
		{
			jimmy.promote();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			candice.promote();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			johnatan.demote();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << jimmy;
		std::cout << jhon;
		std::cout << candice;
		std::cout << johnatan;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat jackyjack("jackyjack", 200);
		std::cout << jackyjack;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat jerry("jerry", -48792);
		std::cout << jerry;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
