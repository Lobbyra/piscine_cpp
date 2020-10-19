/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:40:50 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 17:18:02 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
MateriaSource::MateriaSource(void)
: _materias(new AMateria*[4]), _materias_count(0)
{
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.getMateria(i))
			_materias[i] = src.getMateria(i)->clone();
		else
			_materias[i] = NULL;
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; _materias[i]; i++)
		delete _materias[i];
	delete [] _materias;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

std::string const	MateriaSource::getMaterias(void) const
{
	std::stringstream ss;

	for (int i = 0; i <= 3; i++)
	{
		if (_materias[i])
			ss << "  [" << i << "] = " <<		\
			_materias[i]->getType() << " " <<	\
			_materias[i]->getXP() << std::endl;
	}
	return (ss.str());
}

AMateria			*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 3; i >= 0; i--)
	{
		if (_materias[i] && _materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (NULL);
}

void				MateriaSource::learnMateria(AMateria *src)
{
	if (_materias_count < 4 && src)
	{
		_materias[_materias_count] = src;
		_materias_count++;
	}
}

AMateria	*MateriaSource::getMateria(int const i) const
{
	if (i >= 0 && i <= 3)
		return (_materias[i]);
	return (NULL);
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.getMateria(i))
			_materias[i] = src.getMateria(i)->clone();
		else
			_materias[i] = NULL;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, MateriaSource const &i)
{
	o << "[MateriaSource]" << std::endl;
	o << i.getMaterias();
	return o;
}
