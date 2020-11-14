/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:43:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 13:55:27 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	ScavTrap	boris("boris");
	FragTrap	monique("monique");
	NinjaTrap	victoire;
	NinjaTrap	copy_victoire;
	NinjaTrap	alfred("alfred");

	victoire.setName("Victoire");
	victoire.ninjaShoebox(boris);
	victoire.ninjaShoebox(monique);
	victoire.beRepaired(100);
	victoire.ninjaShoebox(alfred);
	alfred.meleeAttack("victoire");
	victoire.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	alfred.rangedAttack("victoire");
	victoire.takeDamage(NT_CONST_RANGED_ATTACK_DAMAGE);
	NinjaTrap	copy_alfred(alfred);
	std::cout << alfred << std::endl;
	std::cout << copy_alfred << std::endl;
	copy_victoire = NinjaTrap(victoire);
	std::cout << victoire << std::endl;
	std::cout << copy_victoire << std::endl;
	return 0;
}
