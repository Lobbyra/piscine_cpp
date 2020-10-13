/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:06:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/12 18:25:28 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::init_vars(void)
{
	this->type = "CL4P-TP";
	this->level = CT_CONST_LEVEL;
	this->hit_points = CT_CONST_HIT_POINTS;
	this->energy_points = CT_CONST_ENERGY_POINTS;
	this->max_hit_points = CT_CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = CT_CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = CT_CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = CT_CONST_ARMOR_DAMAGE_REDUCTION;
}

ClapTrap::ClapTrap(void) : FragTrap(), ScavTrap()
{
	this->type = "CL4P-TP";
	return ;
}

ClapTrap::ClapTrap(std::string c_name) : FragTrap(), ScavTrap(), name(c_name)
{
	this->name = name;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) : FragTrap(src), ScavTrap(src)
{
	this->type = "CL4P-TP";
	std::cout << COLOR_BLUE_(this->type) << "assemblé et opérationnel !" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << COLOR_BLUE_(this->type) << "désassemblé et détruit !" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	*this = src;
	return (*this);
}

std::string	ClapTrap::getValues(void) const
{
	std::stringstream ss;

	ss << "|---" << std::endl;
	ss << "name :\t\t\t " << this->name << std::endl;
	ss << "level :\t\t\t " << this->level << std::endl;
	ss << "hit_points :\t\t " << this->hit_points << std::endl;
	ss << "energy_points :\t\t " << this->energy_points << std::endl;
	ss << "max_hit_points :\t " << this->max_hit_points << std::endl;
	ss << "melee_attack_damage :\t " << this->melee_attack_damage << std::endl;
	ss << "range_attack_damage :\t " << this->range_attack_damage << std::endl;
	ss << "armor_damage_reduction : " << this->armor_damage_reduction << std::endl;
	ss << "|---";
	return (ss.str());
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i)
{
	o << i.getValues();
	return o;
}
