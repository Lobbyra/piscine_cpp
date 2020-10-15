/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:16:36 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 12:44:03 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
**	/// CANONICAL PART \\\
*/

Sorcerer::Sorcerer(void)
{
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title)
: name(name), title(title)
{
	std::cout << MSG_SORCERER_BORN << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	this->name = src.getName();
	this->title = src.getTitle();
	*this = src;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << MSG_SORCERER_DEAD << std::endl;
	return ;
}

/*
**	/// FUNCTIONS MEMBERS AND METHODS \\\
*/

std::string	Sorcerer::getName(void) const
{
	return (this->name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->title);
}

void	Sorcerer::polymorph(Victim const &v)
{
	v.polymorphed();
}

/*
**	/// OPERATOR OVERLOADS \\\
*/

Sorcerer	&Sorcerer::operator=(Sorcerer const &src)
{
	this->name = src.getName();
	this->title = src.getTitle();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i)
{
	o << MSG_SORCERER_INTRO << std::endl;
	return o;
}
