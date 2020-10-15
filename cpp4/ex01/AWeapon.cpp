/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:01:20 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:14:29 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
: name(name), apcost(apcost), damage(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon::~AWeapon(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

std::string	AWeapon::getName(void) const
{
	return (this->name);
}

int	AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int	AWeapon::getDamage(void) const
{
	return (this->damage);
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
AWeapon	&AWeapon::operator=(AWeapon const &src)
{
	this->name = src.name;
	this->apcost = src.apcost;
	this->damage = src.damage;
	return (*this);
}
