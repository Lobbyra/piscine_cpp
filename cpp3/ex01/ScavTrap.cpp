/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 06:18:51 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/10 18:34:01 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GlobalTrap.hpp"
#include "ScavTrap.hpp"

extern int rand_seed;

void	ScavTrap::init_vars(void)
{
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
	std::cout << SC_MSG_CONSTRUCTOR_STRING << std::endl;
	init_vars();
	return ;
}

ScavTrap::ScavTrap(std::string c_name) : name(c_name)
{
	std::cout << SC_MSG_CONSTRUCTOR_STRING << std::endl;
	init_vars();
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << SC_MSG_DESTRUCTOR << std::endl;
	return ;
}

int			ScavTrap::getEnergyPoints(void)
{
	return (this->energy_points);
}

int			ScavTrap::getHitPoints(void)
{
	return (this->hit_points);
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
		chall_money,
		chall_coinflip,
		chall_ageguessing,
		chall_pinkyfinger,
		chall_rock_paper_scissors
	};

	if (this->energy_points >= 25)
	{
		this->energy_points -= 25;
		if (this->energy_points < 0)
			this->energy_points = 0;
		std::cout << MSG_CHALL_ANNOUNCE << std::endl;
		challenges[ft_rand(5)](target);
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
	ss << "max_hit_points :\t " << this->max_hit_points << std::endl;
	ss << "melee_attack_damage :\t " << this->melee_attack_damage << std::endl;
	ss << "range_attack_damage :\t " << this->range_attack_damage << std::endl;
	ss << "armor_damage_reduction : " << this->armor_damage_reduction << std::endl;
	ss << "|---";
	return (ss.str());
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &frag)
{
	*this = frag;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &i)
{
	o << i.getValues();
	return o;
}
