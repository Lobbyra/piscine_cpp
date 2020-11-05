/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:23:31 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/05 20:06:18 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <iostream>
#include <stack>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;
	MutantStack<int> cpy;
	cpy = mstack;
	std::cout << cpy.top() << std::endl;
	std::cout << *cpy.begin() << std::endl;

	std::cout << "---------------------" << std::endl;

	std::list<int> li;

	li.push_back(5);
	li.push_back(17);
	std::cout << li.back() << std::endl;
	li.pop_back();
	std::cout << li.size() << std::endl;

	li.push_back(3);
	li.push_back(5);
	li.push_back(737);
	li.push_back(0);
	std::list<int>::iterator l_it = li.begin();
	std::list<int>::iterator l_ite = li.end();
	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
		std::cout << *l_it << std::endl;
		++l_it;
	}
	std::cout << li.back() << std::endl;
	std::list<int> l_cpy;
	l_cpy = li;
	std::cout << l_cpy.back() << std::endl;
	std::cout << l_cpy.front() << std::endl;

	std::cout << "---------------------" << std::endl;

	MutantStack<std::string> strings;

	strings.push("Hey ");
	strings.push("ceci ");
	strings.push("est ");
	strings.push("un ");
	strings.push("test !");
	for (MutantStack<std::string>::iterator s_i = strings.begin(); s_i != strings.end(); s_i++)
		std::cout << *s_i << std::endl;
	return(0);
}
