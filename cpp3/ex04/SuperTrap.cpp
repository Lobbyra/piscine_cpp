/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:00:04 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 12:50:09 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperTrap.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
void	SuperTrap::init_vars(void)
{
	this->type = "SUP3R-TP";
	this->level = SP_CONST_LEVEL;
	this->hit_points = SP_CONST_HIT_POINTS;
	this->energy_points = SP_CONST_ENERGY_POINTS;
	this->max_energy_points = SP_CONST_MAX_ENERGY_POINTS;
	this->max_hit_points = SP_CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = SP_CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = SP_CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = SP_CONST_ARMOR_DAMAGE_REDUCTION;
}

SuperTrap::SuperTrap(void)
: ClapTrap()
{
	std::cout << "Un " << COLOR_BLUE_("SUP3R-TP") <<		\
	" arrive du ciel !" << std::endl;
	init_vars();
	return ;
}

SuperTrap::SuperTrap(std::string const &name)
: ClapTrap(name)
{
	std::cout << "Un " << COLOR_BLUE_("SUP3R-TP") <<		\
	" arrive du ciel !" << std::endl;
	init_vars();
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src)
: ClapTrap(src), FragTrap(src), NinjaTrap(src)
{
	std::cout << "Un " << COLOR_BLUE_("SUP3R-TP") <<		\
	" arrive du ciel !" << std::endl;
	*this = src;
}

SuperTrap::~SuperTrap()
{
	std::cout <<									\
	COLOR_BLUE_("SUP3R-TP") <<						\
	" s'illume et explose en mille morceaux !" <<	\
	std::endl;
	return ;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
SuperTrap	&SuperTrap::operator=(SuperTrap const &src)
{
	this->type = src.getType();
	this->name = src.getName();
	this->level = src.getLevel();
	this->hit_points = src.getHitPoints();
	this->energy_points = src.getEnergyPoints();
	this->max_energy_points = src.getMaxEnergyPoints();
	this->max_hit_points = src.getMaxhitpoints();
	this->melee_attack_damage = src.getMeleeattackdamage();
	this->range_attack_damage = src.getRangedttackdamage();
	this->armor_damage_reduction = src.getArmordamagereduction();
	return (*this);
}
