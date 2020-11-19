/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:43:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 17:29:43 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"

#define SEPARATOR_SUPERTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## SuperTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

void	supertrap_demo()
{
	SuperTrap	boris;
	SuperTrap	copy_boris;
	SuperTrap	gaston("gaston");
	ScavTrap	leo("leo");
	FragTrap	lea("lea");
	NinjaTrap	zoe("zoe");

	// INIT
	boris.setName("boris");
	std::cout << boris << std::endl;

	// COMMON ATTACK
	gaston.meleeAttack("boris");
	boris.takeDamage(SP_CONST_MELEE_ATTACK_DAMAGE);
	gaston.rangedAttack("boris");
	boris.takeDamage(SP_CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "boris HP = " << boris.getHitPoints() << std::endl;

	// SPECIAL ATTACK FRAG
	if (gaston.vaulthunter_dot_exe("boris") == 0)
		boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	if (gaston.vaulthunter_dot_exe("boris") == 0)
		boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	if (gaston.vaulthunter_dot_exe("boris") == 0)
		boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	gaston.beRepaired(5);
	if (gaston.vaulthunter_dot_exe("boris") == 0)
		boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);

	// SPECIAL ATTACK FRAG
	boris.ninjaShoebox(leo);
	boris.ninjaShoebox(zoe);
	boris.ninjaShoebox(lea);
	boris.ninjaShoebox(lea);

	// RESUME FINAL
	copy_boris = SuperTrap(boris);
	copy_boris.setName("copy_boris");
	std::cout << boris << std::endl;
	std::cout << copy_boris << std::endl;
	std::cout << gaston << std::endl;
	return ;
}

int		main()
{
	supertrap_demo();
	return (0);
}
