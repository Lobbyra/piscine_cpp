/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:19:01 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 18:32:42 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
PlasmaRifle::PlasmaRifle(void)
: AWeapon(PR_CONST_NAME, PR_CONST_APCOST, PR_CONST_DAMAGE)
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &src)
{
	this->apcost = src.getAPCost();
	this->damage = src.getDamage();
	this->name = src.getName();
	return (*this);
}
