/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:48:39 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/10 12:33:26 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main()
{
	std::cout << "--------------" << std::endl;
	std::cout << "Test du sujet" << std::endl;
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;

	ISquad	*vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine	*cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "-------------------------" << std::endl;
	std::cout << "Test en plus grand nombre" << std::endl;

	Squad			*marines = new Squad;
	for (int i = 0; i < 5; i++)
		marines->push(new TacticalMarine);
	Squad			cpy = *marines;
	ISpaceMarine	*curr;
	for (int i = 0; i < marines->getCount(); i++)
	{
		curr = marines->getUnit(i);
		curr->battleCry();
		curr->rangedAttack();
		curr->meleeAttack();
	}
	delete marines;

	std::cout << "---------------------" << std::endl;
	std::cout << "Test de cas d'erreurs" << std::endl;
	Squad			test1;
	ISpaceMarine	*joseph = new AssaultTerminator;

	test1.push(joseph);
	test1.push(joseph);
	test1.push(0);
	std::cout << "Taille de test1 = " << test1.getCount() << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Suppression de variables en stack" << std::endl;
	return (0);
}
