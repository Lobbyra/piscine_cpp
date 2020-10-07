/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:29:29 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 03:16:50 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie *z1;
	Zombie	z2("Pierre", "Vener");
	Zombie	z3("Jean-Xavier", "Raleur");
	Zombie	z4("Florian", "Endormis");
	ZombieEvent master;

	master.setZombieType("Mort-vivant");
	z1 = master.newZombie("Nicolas");
	master.randomChump();
	master.randomChump();
	master.randomChump();
	master.randomChump();
	master.randomChump();
	master.randomChump();
	master.randomChump();
	master.randomChump();
	master.randomChump();
	master.randomChump();
	master.randomChump();
	z2.advert();
	z3.advert();
	z4.advert();

	delete z1;
	return (0);
}
