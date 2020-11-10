/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:38:44 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/10 12:08:12 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AssaultTerminator.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

ISpaceMarine	*AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator());
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attack with a chainfists *" << std::endl;;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &src)
{
	(void)src;
	return (*this);
}
