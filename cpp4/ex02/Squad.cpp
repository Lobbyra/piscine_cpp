/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:12:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/10 12:33:10 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Squad.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Squad::Squad(void)
{
	_count = 0;
	_marines = NULL;
	return ;
}

Squad::Squad(Squad const &src) : Squad()
{
	std::cout << "yufgudyfighsuydifghsuyi" << std::endl;
	*this = src;
}

Squad::~Squad(void)
{
	this->free_marines();
	_count = 0;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

ISpaceMarine	**Squad::ismcpy(ISpaceMarine **dst)
{
	int i = 0;

	while (i < _count)
	{
		dst[i] = this->getUnit(i);
		i++;
	}
	return (dst);
}

void			Squad::free_marines(void)
{
	int i = 0;

	while (i < _count)
		delete _marines[i++];
	delete [] _marines;
	_marines = NULL;
}

bool			Squad::is_marine_present(ISpaceMarine *marine) const
{
	int i = 0;

	while (i < _count)
	{
		if (_marines[i] == marine)
			return (true);
		i++;
	}
	return (false);
}

int				Squad::getCount(void) const
{
	return (_count);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (n > _count || n < 0)
		return (NULL);
	return (_marines[n]);
}

int	Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine **temp;

	if (marine && _marines == NULL)
	{
		_marines = new ISpaceMarine*[1];
		_marines[0] = marine;
		_count++;
	}
	else if (marine && this->is_marine_present(marine) == false)
	{
		temp = new ISpaceMarine*[_count + 1];
		temp = ismcpy(temp);
		temp[_count] = marine;
		delete [] _marines;
		_marines = temp;
		_count++;
	}
	return (0);
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Squad	&Squad::operator=(Squad const &src)
{
	if (_marines)
	{
		for (int i = 0; i < _count; i++)
			delete _marines[i];
		delete [] _marines;
	}
	_count = 0;
	_marines = NULL;
	for (int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
	return (*this);
}
