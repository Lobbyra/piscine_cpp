/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:46:51 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 17:16:10 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Ice::Ice(void)
{
	this->setType("ice");
	return ;
}

Ice::Ice(Ice const &src)
{
	this->setType(src.getType());
	this->setXP(src.getXP());
	*this = src;
}

Ice::~Ice(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
	AMateria::use(target);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Ice	&Ice::operator=(Ice const &src)
{
	this->setXP(src.getXP());
	return (*this);
}
