/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 09:35:49 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 10:06:58 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(int age, std::string color, int weight, std::string localisation,
						std::string name, std::string destination)
{
	Pony	*pony = new Pony(age, color, weight, localisation, name);

	pony->is_in_heap = true;
	pony->jump();
	pony->presentation();
	pony->travel(destination);
	delete pony;
}

void	ponyOnTheStack(int age, std::string color, int weight, std::string localisation,
						std::string name, std::string destination)
{
	Pony	pony(age, color, weight, localisation, name);

	pony.is_in_heap = false;
	pony.jump();
	pony.presentation();
	pony.travel(destination);

	return ;
}

int		main()
{
	ponyOnTheHeap(56, "red", 67, "Paris", "Nicolas", "New-York");
	std::cout << std::endl;
	ponyOnTheStack(56, "white-red", 76, "Vietnam", "Alfred", "Singapour");
	std::cout << std::endl;
	ponyOnTheHeap(20, "blue", 63, "Vannes", "Jeremy", "Paris");
	std::cout << std::endl;
	ponyOnTheStack(30, "dark", 90, "Laon", "Jean-xavier", "Paris");
	std::cout << std::endl;
	return (0);
}
