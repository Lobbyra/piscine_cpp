/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:28:32 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/13 19:05:03 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
**	/// CONSTRUCTOR & DESTRUCTOR \\\
*/

void	NinjaTrap::init_vars(void)
{
	this->type = "NINJ4-TP";
	this->level = NT_CONST_LEVEL;
	this->hit_points = NT_CONST_HIT_POINTS;
	this->energy_points = NT_CONST_ENERGY_POINTS;
	this->max_hit_points = NT_CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = NT_CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = NT_CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = NT_CONST_ARMOR_DAMAGE_REDUCTION;
}

NinjaTrap::NinjaTrap(void) : name("default")
{
	init_vars();
	std::cout << NT_MSG_CONSTRUCTOR_STRING << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string c_name) : name(c_name)
{
	init_vars();
	std::cout << NT_MSG_CONSTRUCTOR_STRING << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	this->type = "NINJ4-TP";
	this->name = src.name;
	this->level = src.level;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->max_energy_points = src.max_energy_points;
	this->max_hit_points = src.max_hit_points;
	this->melee_attack_damage = src.melee_attack_damage;
	this->range_attack_damage = src.range_attack_damage;
	this->armor_damage_reduction = src.armor_damage_reduction;
	std::cout << NT_MSG_CONSTRUCTOR_COPY << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << NT_MSG_DESTRUCTOR << std::endl;
	return ;
}

/*
**	\\\ CONSTRUCTOR & DESTRUCTOR ///
*/

/*
**	/// MEMBER FUNCTIONS \\\
*/

void		NinjaTrap::rangedAttack(std::string const &target) const
{
	std::cout << NT_MSG_RANGED_ATTACK << std::endl;
}

void		NinjaTrap::meleeAttack(std::string const &target) const
{
	std::cout << NT_MSG_MELEE_ATTACK << std::endl;
}

void		NinjaTrap::setName(std::string name)
{
	this->name = name;
}

void		NinjaTrap::takeDamage(unsigned int amount)
{
	int total_damage;

	total_damage = amount - this->armor_damage_reduction;
	this->hit_points -= total_damage;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << NT_MSG_TAKE_DAMAGE << std::endl;
}

void		NinjaTrap::beRepaired(unsigned int amount)
{
	std::string parts[] =
	{
		"un bras",
		"une roue",
		"son oeil",
		"son antenne"
	};

	this->hit_points += amount;
	if (this->hit_points > NT_CONST_MAX_HIT_POINTS)
		this->hit_points = NT_CONST_MAX_HIT_POINTS;
	this->energy_points += amount;
	if (this->energy_points > NT_CONST_MAX_ENERGY_POINTS)
		this->energy_points = NT_CONST_MAX_ENERGY_POINTS;
	std::cout << NT_MSG_BE_REPAIRED << std::endl;;
}

void	NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	if (this->energy_points >= 25)
	{
		this->energy_points -= 25;
		if (this->energy_points < 0)
			this->energy_points = 0;
		std::cout << NT_MSG_NINJATTACK_FT << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << NT_MSG_NOT_ENOUGH_ENERGY << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	if (this->energy_points >= 25)
	{
		this->energy_points -= 25;
		if (this->energy_points < 0)
			this->energy_points = 0;
		std::cout << NT_MSG_NINJATTACK_ST << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << NT_MSG_NOT_ENOUGH_ENERGY << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	if (this->energy_points >= 25)
	{
		this->energy_points -= 25;
		if (this->energy_points < 0)
			this->energy_points = 0;
		std::cout << NT_MSG_NINJATTACK_CT << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << NT_MSG_NOT_ENOUGH_ENERGY << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	if (this->energy_points >= 25)
	{
		this->energy_points -= 25;
		if (this->energy_points < 0)
			this->energy_points = 0;
		std::cout << NT_MSG_NINJATTACK_NT << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << NT_MSG_NOT_ENOUGH_ENERGY << std::endl << std::endl;
}

/*
**	\\\ MEMBER FUNCTIONS ///
*/

/*
**	/// OPERATOR OVERLOADS \\\
*/

std::string	NinjaTrap::getValues(void) const
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

std::string	NinjaTrap::getType(void) const
{
	return (this->type);
}

std::string	NinjaTrap::getName(void) const
{
	return (this->name);
}

int		NinjaTrap::getArmordamagereduction(void) const
{
	return (this->armor_damage_reduction);
}

int		NinjaTrap::getLevel(void) const
{
	return (this->level);
}

int		NinjaTrap::getHitPoints(void) const
{
	return (this->hit_points);
}

int		NinjaTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}

int		NinjaTrap::getMaxEnergyPoints(void) const
{
	return (this->max_energy_points);
}

int		NinjaTrap::getMaxhitpoint(void) const
{
	return (this->max_hit_points);
}

int		NinjaTrap::getMeleeattackdamage(void) const
{
	return (this->melee_attack_damage);
}

int		NinjaTrap::getRangedttackdamage(void) const
{
	return (this->range_attack_damage);
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &src)
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

std::ostream	&operator<<(std::ostream &o, NinjaTrap const &i)
{
	o << i.getValues();
	return (o);
}

/*
**	\\\ OPERATOR OVERLOADS ///
*/
