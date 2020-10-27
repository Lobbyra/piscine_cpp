/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 12:03:56 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 12:13:13 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	return ;
}

void identify_from_pointer(Base *p)
{
	Base	*test;

	if ((test = dynamic_cast<A*>(p)))
		std::cout << "A" << std::endl;
	else if ((test = dynamic_cast<B*>(p)))
		std::cout << "B" << std::endl;
	else if ((test = dynamic_cast<C*>(p)))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		Base &test = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		Base &test = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		Base &test = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}
