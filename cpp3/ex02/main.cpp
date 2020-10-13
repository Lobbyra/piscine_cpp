/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:43:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/12 18:24:20 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#define SEPARATOR_FRAGTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## FragTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

#define SEPARATOR_SCAVTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## ScavTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

#define SEPARATOR_CLAPTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## ClapTrap TEST ##                               **/\n"	\
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

void	claptrap_demo(void)
{
	ClapTrap	jean_xavier;
	ClapTrap	marie("marie");

	std::cout << jean_xavier << std::endl;
	std::cout << marie << std::endl;
	jean_xavier.setName("jean_xavier");
	jean_xavier.meleeAttack("marie");
	marie.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Sebastien a " << marie.getHitPoints() << " HP." << std::endl;
	marie.meleeAttack("jean-mich");
	jean_xavier.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Jean-mich a " << jean_xavier.getHitPoints() << " HP." << std::endl;
	jean_xavier.rangedAttack("marie");
	marie.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	marie.rangedAttack("jean-mich");
	jean_xavier.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	marie.beRepaired(24);
	std::cout << "Sebastien a " << marie.getHitPoints() << " HP." << std::endl;
	jean_xavier.beRepaired(16);
	std::cout << "Jean-mich a " << jean_xavier.getHitPoints() << " HP." << std::endl;
	jean_xavier.challengeNewcomer("marie");
	jean_xavier.challengeNewcomer("marie");
	jean_xavier.challengeNewcomer("marie");
	marie.beRepaired(100);
	jean_xavier.beRepaired(100);
	std::cout << jean_xavier << std::endl;
	std::cout << marie << std::endl;
	if (jean_xavier.vaulthunter_dot_exe("marie") == 0)
		marie.takeDamage(25);
	if (jean_xavier.vaulthunter_dot_exe("marie") == 0)
		marie.takeDamage(25);
	if (jean_xavier.vaulthunter_dot_exe("marie") == 0)
		marie.takeDamage(25);
	std::cout << jean_xavier << std::endl;
	std::cout << marie << std::endl;
	return ;
}

int		main()
{
	std::cout << SEPARATOR_FRAGTRAP << std::endl;
	fragtrap_demo();
	std::cout << SEPARATOR_SCAVTRAP << std::endl;
	scavtrap_demo();
	std::cout << SEPARATOR_CLAPTRAP << std::endl;
	claptrap_demo();
	return (0);
}
