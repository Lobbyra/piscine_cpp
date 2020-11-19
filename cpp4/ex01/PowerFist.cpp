/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:41:01 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 18:32:30 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
PowerFist::PowerFist(void)
: AWeapon(PF_CONST_NAME, PF_CONST_APCOST, PF_CONST_DAMAGE)
{
	return ;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src)
{
	*this = src;
}

PowerFist::~PowerFist(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

void	PowerFist::attack(void) const
{
	std::cout << "* pschhhh... SBAM! *" << std::endl;;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
PowerFist	&PowerFist::operator=(PowerFist const &src)
{
	this->apcost = src.getAPCost();
	this->damage = src.getDamage();
	this->name = src.getName();
	return (*this);
}
