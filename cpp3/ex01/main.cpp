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

#include "ScavTrap.hpp"

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
	scavtrap_demo();
	return (0);
}
