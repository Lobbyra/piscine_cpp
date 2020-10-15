/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:05:47 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:30:18 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Character::Character(void)
{
	return ;
}

Character::Character(std::string const &name)
: name(name), ap(CH_CONST_APDEFAULT), weapon(NULL)
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

void	Character::recoverAP(void)
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void	Character::equip(AWeapon *w)
{
	this->weapon = w;
}

void	Character::attack(Enemy *target)
{
	if (this->ap >= this->weapon->getAPCost())
	{
		if (this->weapon)
		{
			std::cout << CH_MSG_ATTACK << std::endl;
			this->weapon->attack();
			target->takeDamage(this->weapon->getDamage());
			this->ap -= this->weapon->getAPCost();
		}
	}
	else
		std::cout << CH_MSG_NENOUGHAP << std::endl;
}

int					Character::getAp(void) const
{
	return (this->ap);
}

std::string const	Character::getWeaponName(void) const
{
	return (this->weapon->getName());
}

std::string const	Character::getName(void) const
{
	return (this->name);
}

bool				Character::isequiped(void) const
{
	if (this->weapon)
		return (true);
	return (false);
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Character	&Character::operator=(Character const &src)
{
	this->name = src.getName();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Character const &i)
{
	if (i.isequiped() == true)
		std::cout << CH_MSG_DISPLAY;
	else
		std::cout << CH_MSG_DISPLAY_NOWEA;
	return o;
}
