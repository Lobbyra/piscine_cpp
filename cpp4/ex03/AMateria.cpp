/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 09:35:22 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 16:54:06 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "ICharacter.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
AMateria::AMateria(void)
: _xp(0), _type("")
{
	return ;
}

AMateria::AMateria(std::string const &type)
: _xp(0), _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

void	AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

unsigned int	AMateria::getXP(void) const
{
	return (this->_xp);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::setType(std::string const &type)
{
	_type = type;
}

void	AMateria::setXP(int const xp)
{
	_xp = xp;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
AMateria	&AMateria::operator=(AMateria const &src)
{
	_xp = src.getXP();
	_type = src.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, AMateria const &i)
{
	o << "[AMateria]" << std::endl <<			\
	"type : " << i.getType() << std::endl <<	\
	"XP   : " << i.getXP() << std::endl;
	return o;
}
