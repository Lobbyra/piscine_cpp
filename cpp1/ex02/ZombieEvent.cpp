/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:33:54 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 15:05:49 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *ret = new Zombie(name, this->type);

	ret->advert();
	return (ret);
}

std::string	ran_name()
{
	int i = 0;
	int temp;
	std::string name;
	std::string alpha = "abcdefghijklmnopqrstuvwxyz";

	srand(time(NULL));
	while (i < 6)
	{
		temp = rand();
		name += alpha[temp % 26];
		i++;
	}
	return (name);
}

void	ZombieEvent::randomChump(void)
{
	Zombie ran(ran_name(), this->type);

	ran.advert();
}

void	ZombieEvent::setZombieType(std::string type_name)
{
	this->type = type_name;
}
