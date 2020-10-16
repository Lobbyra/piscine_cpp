/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:12:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/16 15:58:16 by jecaudal         ###   ########.fr       */
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

Squad::Squad(Squad const &src)
{
	_count = src.getCount();
	if (_count > 0)
	{
		_marines = new ISpaceMarine*[_count];
		for (int i = 0; i < _count; i++)
			_marines[i] = src.getUnit(i);
	}
	else
		_marines = NULL;
}

Squad::~Squad(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

ISpaceMarine	**ismcpy(ISpaceMarine **dst, ISpaceMarine **src, int len)
{
	int i = 0;

	while (i < len)
	{
		dst[i] = src[i]->clone();
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
	if (n >= _count || n < 0)
		return (NULL);
	return (_marines[n]);
}

int	Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine **temp;

	if (marine && _marines == NULL && this->is_marine_present(marine) == false)
	{
		_marines = new ISpaceMarine*[1];
		_marines[0] = marine->clone();
		_count++;
	}
	else if (marine && this->is_marine_present(marine) == false)
	{
		temp = new ISpaceMarine*[_count + 1];
		temp = ismcpy(temp, _marines, _count);
		temp[_count] = marine->clone();
		this->free_marines();
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
	_count = src.getCount();
	if (_count > 0)
	{
		_marines = new ISpaceMarine*[_count];
		for (int i = 0; i < _count; i++)
			_marines[i] = src.getUnit(i);
	}
	else
		_marines = NULL;
	return (*this);
}
