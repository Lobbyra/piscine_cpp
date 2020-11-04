/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:42:56 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/03 17:13:50 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <vector>
# include <deque>
# include <set>
#include "easyfind.hpp"

int		main(int argc, char **argv)
{
	std::vector<int> v;

	v.push_back(5);
	v.push_back(42);
	v.push_back(7);
	v.push_back(1);
	v.push_back(3);
	try
	{
		std::cout << easyfind(v, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << easyfind(v, 19) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::deque<int> dqu;

	dqu.push_back(5);
	dqu.push_back(42);
	dqu.push_back(7);
	dqu.push_back(1);
	dqu.push_back(3);
	try
	{
		std::cout << easyfind(dqu, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << easyfind(dqu, 19) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::set<int> s;

	int myints[]= {5,10,15,42};
	s.insert(myints,myints+4);
	try
	{
		std::cout << easyfind(s, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << easyfind(s, 19) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
