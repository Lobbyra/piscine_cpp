/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:09:44 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/20 15:12:21 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Character::Character(void)
: _materias(new AMateria*[4]), _count_materias(0)
{
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
	return ;
}

Character::Character(std::string const &name)
: _name(name), _materias(new AMateria*[4]), _count_materias(0)
{
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
}

Character::Character(Character const &src)
: _materias(new AMateria*[4]), _count_materias(src.getCount())
{
	_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (src.getMateria(i))
			_materias[i] = src.getMateria(i)->clone();
		else
			_materias[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
	delete [] _materias;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

std::string const	&Character::getName(void) const
{
	return (_name);
}

AMateria	*Character::getMateria(int const i) const
{
	return (_materias[i]);
}

int			Character::getCount() const
{
	return (_count_materias);
}

std::string const	Character::getMaterias(void) const
{
	std::stringstream ss;

	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			ss << "  [" << i << "] = " <<		\
			_materias[i]->getType() << " " <<	\
			_materias[i]->getXP() << std::endl;
	}
	return (ss.str());
}

void				Character::equip(AMateria *m)
{
	if (_count_materias == 4 || !m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[_count_materias])
		{
			_materias[_count_materias] = m;
			_count_materias++;
			break ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (!(idx >= 0 && idx <= 3))
		return ;
	if (_materias[idx])
		_count_materias--;
	_materias[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (!_materias[idx])
		return ;
	_materias[idx]->use(target);
}

void				Character::setName(std::string const &name)
{
	_name = name;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Character	&Character::operator=(Character const &src)
{
	_name = src.getName();
	_count_materias = src.getCount();
	for (int i = 0; i < 4; i++)
	{
		if (src.getMateria(i))
			_materias[i] = src.getMateria(i)->clone();
		else
			_materias[i] = NULL;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Character const &i)
{
	o << "[CHARACTER]" << std::endl;
	o << "_name : " << i.getName() << std::endl;
	o << "_count_materia : " << i.getCount() << std::endl;
	o << "_materias : " << std::endl << i.getMaterias() << std::endl;
	return o;
}
