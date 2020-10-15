/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:48:25 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 12:44:00 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
**	 /// CANONICAL PART \\\
*/

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name) : name(name)
{
	std::cout << MSG_VICTIM_CONSTR << std::endl;
	return ;
}

Victim::Victim(Victim const &src)
{
	this->name = src.getName();
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << MSG_VICTIM_DESTR << std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER & METHODS PART \\\
*/

std::string	Victim::getName() const
{
	return(this->name);
}

void	Victim::polymorphed(void) const
{
	std::cout << MSG_VICTIM_POLYD << std::endl;;
}

/*
**	/// OVERLOADS PART \\
*/

Victim	&Victim::operator=(Victim const &src)
{
	this->name = src.getName();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Victim const &i)
{
	o << MSG_VICTIM_INTRO << std::endl;
	return o;
}
