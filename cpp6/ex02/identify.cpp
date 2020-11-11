/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 12:03:56 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/11 15:38:03 by jecaudal         ###   ########.fr       */
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

int		random_seed = 0;

//	FT_RAND
//	This functions take a modulo and return a random int by modulo
//	This function NEED random_seed to avoid perput
int		ft_rand(int const modulo)
{
	if (random_seed != time(NULL))
	{
		srand(time(NULL));
		random_seed = time(NULL);
	}
	return (rand() % modulo);
}

Base	*generate(void)
{
	int result;

	result = ft_rand(3);
	if (result == 0)
		return (new A);
	else if (result == 1)
		return (new B);
	else if (result == 2)
		return (new C);
	return (new A);
}
