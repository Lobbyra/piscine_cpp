/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtException.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:00:25 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/03 15:53:21 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FtException.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
FtException::FtException(void)
{
	return ;
}

FtException::FtException(std::string const str) : _s(str)
{
	return ;
}

FtException::FtException(FtException const &src)
{
	*this = src;
}

FtException::~FtException()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

char const *FtException::what() const throw()
{
	return (_s.c_str());
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
FtException	&FtException::operator=(FtException const &src)
{
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, FtException const &i)
{
	o /*<< DATA*/ << std::endl;
	return (o);
}
