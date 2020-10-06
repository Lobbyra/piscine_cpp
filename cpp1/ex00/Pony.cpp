/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:00:12 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 10:04:24 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int c_age, std::string c_color, int c_weight, std::string c_loc, std::string c_name)
: age(c_age), name(c_name), color(c_color), weight(c_weight), localisation(c_loc)
{
	std::cout << this->name << " is born." << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << this->name << " is gone." << std::endl;
	return ;
}

void	Pony::jump(void)
{
	std::cout << this->name << " jumped !" << std::endl;
}

void	Pony::change_color(std::string color)
{
	this->color = color;
}

// Function to introduce the pony.
void	Pony::presentation(void)
{
	std::cout << "Hey my name is " << this->name << " and i'm a " << this->color << " pony !" << std::endl;
	std::cout << "I'm " << this->age << " and i weigh " << this->weight << "Kg." << std::endl;
	if (this->is_in_heap == true)
		std::cout << "I'm currently at " << this->localisation << " on the heap." << std::endl;
	else
		std::cout << "I'm currently at " << this->localisation << " on the stack." << std::endl;
}

void	Pony::travel(std::string destination)
{
	this->localisation = destination;
	std::cout << "I'm arrived to " << this->localisation << std::endl;
}
