/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 08:22:50 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 10:40:25 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string c_name, Weapon &c_weapon) : name(c_name), weapon(c_weapon)
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attack with his " << this->weapon.getType() << std::endl;
}
