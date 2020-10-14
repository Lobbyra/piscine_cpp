/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:06:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/14 14:33:42 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
**	/// CONSTRUCTOR / DESTRUCTOR + = OPERATOR \\\
*/

void	ClapTrap::init_vars(void)
{
	this->type = "CL4P-TP";
	this->level = CT_CONST_LEVEL;
	this->hit_points = CT_CONST_HIT_POINTS;
	this->energy_points = CT_CONST_ENERGY_POINTS;
	this->max_energy_points = CT_CONST_MAX_ENERGY_POINTS;
	this->max_hit_points = CT_CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = CT_CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = CT_CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = CT_CONST_ARMOR_DAMAGE_REDUCTION;
}

ClapTrap::ClapTrap(void) : FragTrap("default"), ScavTrap("default"), name("default")
{
	init_vars();
	std::cout << COLOR_BLUE_(this->type) << " " << COLOR_BLUE_(this->name) \
	<< " assemblé et opérationnel !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string c_name) : FragTrap(c_name), ScavTrap(c_name), name(c_name)
{
	init_vars();
	std::cout << COLOR_BLUE_(this->type) << " " << COLOR_BLUE_(this->name) \
	<< " assemblé et opérationnel !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) : FragTrap(src.name), ScavTrap(src.name)
{
	this->type = "CL4P-TP";
	this->name = src.name;
	this->level = src.level;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->max_energy_points = src.max_energy_points;
	this->max_hit_points = src.max_hit_points;
	this->melee_attack_damage = src.melee_attack_damage;
	this->range_attack_damage = src.range_attack_damage;
	this->armor_damage_reduction = src.armor_damage_reduction;
	std::cout << COLOR_BLUE_(this->type) << " créé copié de " <<	\
	COLOR_BLUE_(src.name) << " et opérationnel !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << COLOR_BLUE_(this->type) << " de nom "	\
	<< COLOR_BLUE_(this->name) << " désassemblé !" << std::endl;
	return ;
}

std::string	ClapTrap::getType(void) const
{
	return (this->type);
}
std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

int		ClapTrap::getArmordamagereduction(void) const
{
	return (this->armor_damage_reduction);
}

int		ClapTrap::getLevel(void) const
{
	return (this->level);
}

int		ClapTrap::getHitPoints(void) const
{
	return (this->hit_points);
}

int		ClapTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}

int		ClapTrap::getMaxEnergyPoints(void) const
{
	return (this->energy_points);
}

int		ClapTrap::getMaxhitpoint(void) const
{
	return (this->max_hit_points);
}

int		ClapTrap::getMeleeattackdamage(void) const
{
	return (this->melee_attack_damage);
}

int		ClapTrap::getRangedttackdamage(void) const
{
	return (this->range_attack_damage);
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	this->name = src.getName();
	this->level = src.getLevel();
	this->hit_points = src.getHitPoints();
	this->energy_points = src.getEnergyPoints();
	this->max_energy_points = src.getMaxEnergyPoints();
	this->max_hit_points = src.getHitPoints();
	this->melee_attack_damage = src.getMeleeattackdamage();
	this->range_attack_damage = src.getRangedttackdamage();
	this->armor_damage_reduction = src.getArmordamagereduction();
	return (*this);
}
/*
**	\\\ CONSTRUCTOR / DESTRUCTOR + = operator ///
*/

/*
**	/// FUNCTION MEMBER \\\
*/

void		ClapTrap::setName(std::string name)
{
	ScavTrap::setName(name);
	FragTrap::setName(name);
	this->name = name;
}

void		ClapTrap::rangedAttack(std::string const &target) const
{
	FragTrap::rangedAttack(target);
	// std::cout << MSG_RANGED_ATTACK << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << MSG_MELEE_ATTACK << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int total_damage;

	total_damage = amount - this->armor_damage_reduction;
	this->hit_points -= total_damage;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << MSG_TAKE_DAMAGE << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::string parts[] =
	{
		"un bras",
		"une roue",
		"son oeil",
		"son antenne"
	};

	this->hit_points += amount;
	if (this->hit_points > CONST_MAX_HIT_POINTS)
		this->hit_points = CONST_MAX_HIT_POINTS;
	this->energy_points += amount;
	if (this->energy_points > CONST_MAX_ENERGY_POINTS)
		this->energy_points = CONST_MAX_ENERGY_POINTS;
	std::cout << MSG_BE_REPAIRED << std::endl;;
}

/*
**	\\\ FUNCTION MEMBER ///
*/

/*
**	/// OPERATOR << PART \\\
*/

std::string	ClapTrap::getValues(void) const
{
	std::stringstream ss;

	ss << "|---" << std::endl;
	ss << "name :\t\t\t " << this->name << std::endl;
	ss << "level :\t\t\t " << this->level << std::endl;
	ss << "hit_points :\t\t " << this->hit_points << std::endl;
	ss << "energy_points :\t\t " << this->energy_points << std::endl;
	ss << "max_energy_points :\t " << this->max_energy_points << std::endl;
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

/*
**	\\\ OPERATOR << PART ///
*/
