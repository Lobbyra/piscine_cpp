/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:43:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/13 18:54:04 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

#define SEPARATOR_NINJATRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## ClapTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

#define SEPARATOR_SUPERTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## ClapTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

void	fragtrap_demo(void)
{
	FragTrap michel;
	FragTrap nicolas("nicolas");
	FragTrap copy_nicolas(nicolas);

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
	std::cout << "Nicolas est a " << nicolas.getHitPoints() << "HP" << std::endl << std::endl;
	michel.beRepaired(25);
	std::cout << "Michel a " << michel.getEnergyPoints() << " points d'energie." << std::endl;
	nicolas.beRepaired(45);
	std::cout << "Nicolas est a " << nicolas.getHitPoints() << "HP" << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	michel.beRepaired(40);
	nicolas.rangedAttack("michel");
	michel.takeDamage(CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	std::cout << michel << std::endl;
	std::cout << nicolas << std::endl;
	copy_nicolas = FragTrap(nicolas);
	copy_nicolas.setName("copy_nicolas");
	std::cout << copy_nicolas << std::endl;
}

void	scavtrap_demo(void)
{
	ScavTrap	jean_mich;
	ScavTrap	copy_sebastien;
	ScavTrap	sebastien("sebastien");

	std::cout << jean_mich << std::endl;
	std::cout << sebastien << std::endl;
	jean_mich.setName("jean_mich");
	jean_mich.meleeAttack("sebastien");
	sebastien.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Sebastien a " << sebastien.getHitPoints() << " HP." << std::endl << std::endl;
	sebastien.meleeAttack("jean-mich");
	jean_mich.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "jean_mich a " << sebastien.getHitPoints() << " HP." << std::endl << std::endl;
	jean_mich.rangedAttack("sebastien");
	sebastien.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "Sebastien a " << sebastien.getHitPoints() << " HP." << std::endl << std::endl;
	sebastien.rangedAttack("jean-mich");
	jean_mich.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "Jean_mich a " << sebastien.getHitPoints() << " HP." << std::endl << std::endl;
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
	copy_sebastien = ScavTrap(sebastien);
	copy_sebastien.setName("copy_sebastien");
	std::cout << copy_sebastien << std::endl;
}

void	claptrap_demo(void)
{
	ClapTrap	jean_xavier;
	ClapTrap	marie("marie");
	ClapTrap	copy_marie;

	std::cout << jean_xavier << std::endl;
	jean_xavier.setName("jean_xavier");
	std::cout << jean_xavier << std::endl;
	std::cout << marie << std::endl;
	jean_xavier.meleeAttack("marie");
	marie.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Marie a " << marie.getHitPoints() << " HP." << std::endl;
	marie.meleeAttack("Marie");
	jean_xavier.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Marie a " << jean_xavier.getHitPoints() << " HP." << std::endl;
	jean_xavier.rangedAttack("marie");
	marie.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	marie.rangedAttack("Marie");
	jean_xavier.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	marie.beRepaired(24);
	std::cout << "Marie a " << marie.getHitPoints() << " HP." << std::endl;
	jean_xavier.beRepaired(16);
	std::cout << "Marie a " << jean_xavier.getHitPoints() << " HP." << std::endl;
	jean_xavier.challengeNewcomer("Marie");
	jean_xavier.challengeNewcomer("Marie");
	jean_xavier.challengeNewcomer("Marie");
	marie.beRepaired(100);
	jean_xavier.beRepaired(100);
	if (jean_xavier.vaulthunter_dot_exe("marie") == 0)
		marie.takeDamage(25);
	std::cout << "Marie est a " << marie.getHitPoints() << "HP" << std::endl;
	if (jean_xavier.vaulthunter_dot_exe("marie") == 0)
		marie.takeDamage(25);
	std::cout << "Marie est a " << marie.getHitPoints() << "HP" << std::endl;
	if (jean_xavier.vaulthunter_dot_exe("marie") == 0)
		marie.takeDamage(25);
	std::cout << "Marie est a " << marie.getHitPoints() << "HP" << std::endl;
	std::cout << jean_xavier << std::endl;
	std::cout << marie << std::endl;
	copy_marie = ClapTrap(marie);
	copy_marie.setName("copy_marie");
	std::cout << copy_marie << std::endl;
	return ;
}

void	ninjatrap_demo(void)
{
	ScavTrap	boris("boris");
	FragTrap	monique("monique");
	ClapTrap	hugues("hugues");
	NinjaTrap	victoire;
	NinjaTrap	copy_victoire;
	NinjaTrap	alfred("alfred");

	victoire.setName("Victoire");
	victoire.ninjaShoebox(boris);
	victoire.ninjaShoebox(monique);
	victoire.ninjaShoebox(hugues);
	victoire.beRepaired(100);
	victoire.ninjaShoebox(alfred);
	alfred.meleeAttack("victoire");
	victoire.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	alfred.rangedAttack("victoire");
	victoire.takeDamage(NT_CONST_RANGED_ATTACK_DAMAGE);
	copy_victoire = NinjaTrap(victoire);
	std::cout << victoire << std::endl;
	std::cout << copy_victoire << std::endl;
	return ;
}

void	supertrap_demo()
{
	ClapTrap adrieng;
	SuperTrap boris;
	SuperTrap copy_boris;
	SuperTrap gaston("gaston");

	boris.setName("boris");
	gaston.meleeAttack("boris");
	boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	gaston.rangedAttack("boris");
	boris.takeDamage(NT_CONST_RANGED_ATTACK_DAMAGE);
	boris.ninjaShoebox(adrieng);
	boris.vaulthunter_dot_exe("adrieng");
	std::cout << boris << std::endl;
	std::cout << gaston << std::endl;
	return ;
}

int		main()
{
	int  choise;

	std::cout << "Quel XTrap veux-tu tester ?" << std::endl;
	std::cout << "    [1] : ScavTrap" << std::endl;
	std::cout << "    [2] : FragTrap" << std::endl;
	std::cout << "    [3] : ClapTrap" << std::endl;
	std::cout << "    [4] : NinjaTrap" << std::endl;
	std::cout << "    [5] : SuperTrap" << std::endl;
	std::cout << "    [6] : TOUS" << std::endl;
	std::cout << "> ";
	std::cin >> choise;

	switch(choise)
	{
		case 1:
			scavtrap_demo();
			break ;
		case 2:
			fragtrap_demo();
			break ;
		case 3:
			claptrap_demo();
			break ;
		case 4:
			ninjatrap_demo();
			break ;
		case 5:
			supertrap_demo();
			break ;
		case 6:
			std::cout << SEPARATOR_FRAGTRAP << std::endl;
			fragtrap_demo();
			std::cout << SEPARATOR_SCAVTRAP << std::endl;
			scavtrap_demo();
			std::cout << SEPARATOR_CLAPTRAP << std::endl;
			claptrap_demo();
			std::cout << SEPARATOR_NINJATRAP << std::endl;
			ninjatrap_demo();
			std::cout << SEPARATOR_SUPERTRAP << std::endl;
			supertrap_demo();
			break ;
	}
	return (0);
}
