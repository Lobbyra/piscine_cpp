/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 06:18:51 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/14 12:25:16 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GlobalTrap.hpp"
#include "ScavTrap.hpp"

extern int rand_seed;

void	ScavTrap::init_vars(void)
{
	this->type = "SC4V-TP";
	this->level = SC_CONST_LEVEL;
	this->hit_points = SC_CONST_HIT_POINTS;
	this->energy_points = SC_CONST_ENERGY_POINTS;
	this->max_hit_points = SC_CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = SC_CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = SC_CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = SC_CONST_ARMOR_DAMAGE_REDUCTION;
}

ScavTrap::ScavTrap(void) : name("default")
{
	init_vars();
	std::cout << SC_MSG_CONSTRUCTOR_STRING << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string c_name) : name(c_name)
{
	init_vars();
	std::cout << SC_MSG_CONSTRUCTOR_STRING << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	this->type = "SC4V-TP";
	this->name = src.name;
	this->level = src.level;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->max_energy_points = src.max_energy_points;
	this->max_hit_points = src.max_hit_points;
	this->melee_attack_damage = src.melee_attack_damage;
	this->range_attack_damage = src.range_attack_damage;
	this->armor_damage_reduction = src.armor_damage_reduction;
	std::cout << SC_MSG_CONSTRUCTOR_COPY << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << SC_MSG_DESTRUCTOR << std::endl;
	return ;
}

void		ScavTrap::setName(std::string name)
{
	this->name = name;
}

void		ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << SC_MSG_RANGED_ATTACK << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << SC_MSG_MELEE_ATTACK << std::endl;
}

// Challenge are declared in ScavTrapChall.cpp
void	ScavTrap::challengeNewcomer(std::string const &target)
{
	t_ft_chall	challenges[5] =
	{
		&ScavTrap::chall_money,
		&ScavTrap::chall_coinflip,
		&ScavTrap::chall_ageguessing,
		&ScavTrap::chall_pinkyfinger,
		&ScavTrap::chall_rock_paper_scissors
	};

	if (this->energy_points >= 25)
	{
		this->energy_points -= 25;
		if (this->energy_points < 0)
			this->energy_points = 0;
		std::cout << MSG_CHALL_ANNOUNCE << std::endl;
		(this->*(challenges[ft_rand(5)]))(target);
		std::cout << std::endl;
	}
	else
		std::cout << SC_MSG_NOT_ENOUGH_ENERGY << std::endl << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	int total_damage;

	total_damage = amount - this->armor_damage_reduction;
	this->hit_points -= total_damage;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << SC_MSG_TAKE_DAMAGE << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::string parts[] =
	{
		"un bras",
		"une roue",
		"son oeil",
		"son antenne"
	};

	if (rand_seed != time(NULL))
	{
		srand(time(NULL));
		rand_seed = time(NULL);
	}
	this->hit_points += amount;
	if (this->hit_points > SC_CONST_MAX_HIT_POINTS)
		this->hit_points = SC_CONST_MAX_HIT_POINTS;
	this->energy_points += amount;
	if (this->energy_points > SC_CONST_MAX_ENERGY_POINTS)
		this->energy_points = SC_CONST_MAX_ENERGY_POINTS;
	std::cout << SC_MSG_BE_REPAIRED << std::endl;;
}

std::string	ScavTrap::getValues(void) const
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

std::string	ScavTrap::getName(void) const
{
	return (this->name);
}

int		ScavTrap::getArmordamagereduction(void) const
{
	return (this->armor_damage_reduction);
}

std::string	ScavTrap::getType(void) const
{
	return (this->type);
}

int		ScavTrap::getLevel(void) const
{
	return (this->level);
}

int		ScavTrap::getHitPoints(void) const
{
	return (this->hit_points);
}

int		ScavTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}

int		ScavTrap::getMaxEnergyPoints(void) const
{
	return (this->energy_points);
}

int		ScavTrap::getMaxhitpoint(void) const
{
	return (this->max_hit_points);
}

int		ScavTrap::getMeleeattackdamage(void) const
{
	return (this->melee_attack_damage);
}

int		ScavTrap::getRangedttackdamage(void) const
{
	return (this->range_attack_damage);
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	this->name = src.getName();
	this->level = src.getLevel();
	this->hit_points = src.getHitPoints();
	this->energy_points = src.getEnergyPoints();
	this->energy_points = src.getMaxEnergyPoints();
	this->max_hit_points = src.getHitPoints();
	this->melee_attack_damage = src.getMeleeattackdamage();
	this->range_attack_damage = src.getRangedttackdamage();
	this->armor_damage_reduction = src.getArmordamagereduction();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &i)
{
	o << i.getValues();
	return (o);
}
