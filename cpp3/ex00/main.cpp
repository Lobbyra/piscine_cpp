/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:43:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/09 19:45:40 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	FragTrap michel;
	FragTrap nicolas("nicolas");

	std::cout << michel << std::endl;
	michel.setName("michel");
	std::cout << michel << std::endl;
	std::cout << nicolas << std::endl;
	std::cout << std::endl;

	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);

	std::cout << "Michel a " << michel.getEnergyPoints() << " points d'energie." << std::endl;
	michel.beRepaired(25);
	std::cout << "Michel a " << michel.getEnergyPoints() << " points d'energie." << std::endl;
	std::cout << "Nicolas est a " << nicolas.getHitPoints() << "HP" << std::endl;
	nicolas.beRepaired(45);
	std::cout << "Nicolas est a " << nicolas.getHitPoints() << "HP" << std::endl;
	std::cout << std::endl;

	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	std::cout << std::endl;

	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	std::cout << std::endl;

	michel.beRepaired(40);
	nicolas.rangedAttack("michel");
	michel.takeDamage(CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	return (0);
}
