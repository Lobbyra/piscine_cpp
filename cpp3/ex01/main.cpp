/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:43:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/10 18:33:25 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define SEPARATOR_FRAGTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## FragTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

#define SEPARATOR_SCAVTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## ScavTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

void	fragtrap_demo(void)
{
	FragTrap michel;
	FragTrap nicolas("nicolas");

	std::cout << michel << std::endl;
	michel.setName("michel");
	std::cout << michel << std::endl;
	std::cout << nicolas << std::endl;

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
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	michel.beRepaired(40);
	nicolas.rangedAttack("michel");
	michel.takeDamage(CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
}

void	scavtrap_demo(void)
{
	ScavTrap	jean_mich;
	ScavTrap	sebastien("sebastien");

	std::cout << jean_mich << std::endl;
	std::cout << sebastien << std::endl;
	jean_mich.setName("jean_mich");
	jean_mich.meleeAttack("sebastien");
	sebastien.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Sebastien a " << sebastien.getHitPoints() << " HP." << std::endl;
	sebastien.meleeAttack("jean-mich");
	jean_mich.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Jean-mich a " << jean_mich.getHitPoints() << " HP." << std::endl;
	jean_mich.rangedAttack("sebastien");
	sebastien.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	sebastien.rangedAttack("jean-mich");
	jean_mich.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	sebastien.beRepaired(24);
	std::cout << "Sebastien a " << sebastien.getHitPoints() << " HP." << std::endl;
	jean_mich.beRepaired(16);
	std::cout << "Jean-mich a " << jean_mich.getHitPoints() << " HP." << std::endl;
	jean_mich.challengeNewcomer("sebastien");
	jean_mich.challengeNewcomer("sebastien");
	jean_mich.challengeNewcomer("sebastien");
	sebastien.challengeNewcomer("sebastien");
	sebastien.challengeNewcomer("sebastien");
	sebastien.challengeNewcomer("sebastien");
	std::cout << jean_mich << std::endl;
	std::cout << sebastien << std::endl;
}

int		main()
{
	std::cout << SEPARATOR_FRAGTRAP << std::endl;
	fragtrap_demo();
	std::cout << SEPARATOR_SCAVTRAP << std::endl;
	scavtrap_demo();
	return (0);
}
