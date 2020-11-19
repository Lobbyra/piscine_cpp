/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:43:41 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:44:19 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int		main()
{
	Character	*moi = new Character("Jeremy");

	std::cout << *moi << std::endl;

	Enemy	*rs = new RadScorpion();
	Enemy	*sm = new SuperMutant();
	std::cout << *rs << std::endl;
	std::cout << *sm << std::endl;

	AWeapon	*pr = new PlasmaRifle();
	AWeapon	*pf = new PowerFist();
	std::cout << std::endl;

	moi->equip(pr);
	std::cout << *moi << std::endl;
	moi->equip(pf);
	std::cout << *moi << std::endl << std::endl;

	moi->attack(rs);
	std::cout << *rs << std::endl;
	std::cout << *moi << std::endl;
	std::cout << std::endl;

	moi->attack(sm);
	std::cout << *sm << std::endl;
	std::cout << *moi << std::endl;
	std::cout << std::endl;

	moi->equip(pr);
	std::cout << *moi << std::endl;
	std::cout << std::endl;

	moi->attack(sm);
	std::cout << *moi << std::endl;
	std::cout << std::endl;

	moi->attack(sm);
	std::cout << *moi << std::endl;
	std::cout << std::endl;

	moi->attack(rs);
	std::cout << *moi << std::endl;
	std::cout << std::endl;

	moi->attack(sm);
	std::cout << *moi << std::endl;
	std::cout << std::endl;

	moi->attack(sm);
	std::cout << *moi << std::endl;
	std::cout << std::endl;

	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();

	std::cout << *moi << std::endl;
	moi->attack(sm);
	std::cout << std::endl;

	delete moi;
	delete rs;
	delete sm;
	delete pr;
	delete pf;
	return (0);
}
