/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:58:28 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:22:30 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
RadScorpion::RadScorpion(void)
: Enemy(RS_CONST_HP, RS_CONST_TYPE)
{
	std::cout << RS_MSG_CONSTR << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const &src)
{
	std::cout << RS_MSG_CONSTR << std::endl;
	*this = src;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << RS_MSG_DESTR << std::endl;
	return ;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
RadScorpion	&RadScorpion::operator=(RadScorpion const &src)
{
	this->hp = src.getHP();
	this->type = src.getType();
	return (*this);
}

