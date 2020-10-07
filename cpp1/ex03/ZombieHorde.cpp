/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:11:33 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 03:29:12 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string	ran_name()
{
	int i = 0;
	std::string name;
	std::string alpha = "abcdefghijklmnopqrstuvwxyz";

	while (i < 6)
	{
		name += alpha[rand() % 26];
		i++;
	}
	return (name);
}

ZombieHorde::ZombieHorde(int n)
{
	int i = 0;
	std::string clans[] = {"Alliance", "Horde"};
	this->horde = new Zombie[n];
	this->n_zombies = n;

	srand(time(NULL) * n + (n % 2));
	this->type = clans[n % 2];
	while (i < n)
	{
		horde[i].type = this->type;
		horde[i].name = ran_name();
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->horde;
	return ;
}

void	ZombieHorde::announce() const
{
	int i = 0;

	while (i < this->n_zombies)
	{
		this->horde[i].advert();
		i++;
	}
}

