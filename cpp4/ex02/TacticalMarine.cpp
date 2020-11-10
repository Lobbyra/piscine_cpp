/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:32:43 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/10 12:07:47 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TacticalMarine.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

ISpaceMarine	*TacticalMarine::clone() const
{
	return (new TacticalMarine());
}

void	TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT!" << std::endl;;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &src)
{
	(void)src;
	return (*this);
}
