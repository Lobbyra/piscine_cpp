/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:16:10 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 18:34:23 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Cure::Cure(void)
{
	this->setType("cure");
	return ;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	this->setType(src.getType());
	this->setXP(src.getXP());
	*this = src;
}

Cure::~Cure(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

void		Cure::use(ICharacter &target)
{
	std::cout << \
	"* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Cure	&Cure::operator=(Cure const &src)
{
	this->setType(src.getType());
	this->setXP(src.getXP());
	return (*this);
}
