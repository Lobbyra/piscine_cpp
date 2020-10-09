/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 05:15:12 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/09 05:56:45 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::init_vars(void)
{
	this->level = 1;
	this->hit_points = 100;
	this->energy_points = 100;
	this->max_hit_points = 100;
	this->melee_attack_damage = 30;
	this->range_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

FragTrap::FragTrap(void)
{
	init_vars();
	return ;
}

FragTrap::FragTrap(std::string c_name) : name(name)
{
	init_vars();
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
}

FragTrap::~FragTrap(void)
{
	return ;
}

FragTrap	&Fixed::operator=(FragTrap const &src)
{
	this->level = src.level;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->max_hit_points = src.max_hit_points;
	this->melee_attack_damage = src.melee_attack_damage;
	this->range_attack_damage = src.range_attack_damage;
	this->armor_damage_reduction = src.armor_damage_reduction;
	return (*this);
}

std::ostream	&operator<<(std::ostream &s, FragTrap const &i)
{
	s /*<< DATA*/ << std::endl;
	return s;
}

std::string (FragTrap const &i)
{
	sstream s;

	s << "level :" << i.level << std::endl;
	s << "level :" << i.level << std::endl;
	s << "level :" << i.level << std::endl;
	s << "level :" << i.level << std::endl;
	s << "level :" << i.level << std::endl;
	s << "level :" << i.level << std::endl;
	s << "level :" << i.level << std::endl;
	return (s.str());
}
