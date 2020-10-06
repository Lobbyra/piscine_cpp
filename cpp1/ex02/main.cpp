/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:29:29 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 15:07:50 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie *z1;
	Zombie	z2("pierre", "Vener");
	ZombieEvent master;

	master.setZombieType("Mort-vivant");
	z1 = master.newZombie("Nicolas");
	master.randomChump();
	z2.advert();

	delete z1;
	return (0);
}
