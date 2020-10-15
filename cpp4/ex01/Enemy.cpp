/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:48:13 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:38:14 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{
	return ;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::~Enemy(void)
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

int	Enemy::getHP(void) const
{
	return (this->hp);
}

std::string	Enemy::getType(void) const
{
	return (this->type);
}

void	Enemy::takeDamage(int amount)
{
	this->hp -= amount;
	if (hp < 0)
		this->hp = 0;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Enemy	&Enemy::operator=(Enemy const &src)
{
	this->hp = src.getHP();
	this->type = src.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Enemy const &i)
{
	o << i.getType() << " got " << i.getHP() << " HP";
	return (o);
}
