/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:53:15 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:25:19 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
SuperMutant::SuperMutant(void)
: Enemy(SM_CONST_HP, SM_CONST_TYPE)
{
	std::cout << SM_MSG_CONSTR << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
	std::cout << SM_MSG_CONSTR << std::endl;
	*this = src;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << SM_MSG_DESTR << std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

void	SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - SM_CONST_ARMOR);
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
SuperMutant	&SuperMutant::operator=(SuperMutant const &src)
{
	this->hp = src.getHP();
	this->type = src.getType();
	return (*this);
}
