/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:53:36 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 14:24:43 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Peon::Peon(void)
{
	return ;
}

Peon::Peon(std::string name) : Victim(name), name(name)
{
	std::cout << MSG_PEON_CONSTR << std::endl;
	return ;
}

Peon::Peon(Peon const &src)
{
	this->name = src.getName();
	*this = src;
}

Peon::~Peon(void)
{
	std::cout << MSG_PEON_DESTR << std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

std::string	Peon::getName(void) const
{
	return (this->name);
}

void	Peon::polymorphed(void) const
{
	std::cout << MSG_PEON_POLYD << std::endl;;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Peon	&Peon::operator=(Peon const &src)
{
	this->name = src.getName();
	return (*this);
}
