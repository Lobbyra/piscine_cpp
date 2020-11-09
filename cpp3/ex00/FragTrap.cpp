/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 05:15:12 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/09 09:42:20 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int rand_seed = 0;

void	FragTrap::init_vars(void)
{
	this->level = CONST_LEVEL;
	this->hit_points = CONST_HIT_POINTS;
	this->energy_points = CONST_ENERGY_POINTS;
	this->max_hit_points = CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = CONST_ARMOR_DAMAGE_REDUCTION;
}

FragTrap::FragTrap(void) : name("default")
{
	std::cout << MSG_CONSTRUCTOR_STRING << std::endl;
	init_vars();
	return ;
}

FragTrap::FragTrap(std::string c_name) : name(c_name)
{
	std::cout << MSG_CONSTRUCTOR_STRING << std::endl;
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

int			FragTrap::getEnergyPoints(void)
{
	return (this->energy_points);
}

int			FragTrap::getHitPoints(void)
{
	return (this->hit_points);
}

void		FragTrap::setName(std::string name)
{
	this->name = name;
}

void		FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << MSG_RANGED_ATTACK << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << MSG_MELEE_ATTACK << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	int total_damage;

	total_damage = amount - this->armor_damage_reduction;
	this->hit_points -= total_damage;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << MSG_TAKE_DAMAGE << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::string parts[] =
	{
		"un bras",
		"une roue",
		"son oeil",
		"son antenne"
	};

	if (rand_seed != time(NULL))
		srand(time(NULL));
	this->hit_points += amount;
	if (this->hit_points > CONST_MAX_HIT_POINTS)
		this->hit_points = CONST_MAX_HIT_POINTS;
	this->energy_points += amount;
	if (this->energy_points > CONST_MAX_ENERGY_POINTS)
		this->energy_points = CONST_MAX_ENERGY_POINTS;
	std::cout << MSG_BE_REPAIRED << std::endl;;
}

int			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string	weapons[] = 
	{
		"un briquet éléctrique",
		"le couteau à beurre de son dernier propriétaire",
		"des ondes bluetooth",
		"un jolie lancé en cloche de son oeil",
		"un lancé droit hasardeu de sa plus belle chaussure"
	};

	if (rand_seed != time(NULL))
	{
		srand(time(NULL));
		rand_seed = time(NULL);
	}
	if (this->energy_points < 25)
	{
		std::cout << MSG_NOT_ENOUGH_ENERGY << std::endl;
		return (1);
	}
	else
	{
		this->energy_points -= 25;
		std::cout << MSG_VAULTHUNTER_DOT_EXE << std::endl;
	}
	return (0);
}

std::string	FragTrap::getValues(void) const
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

FragTrap	&FragTrap::operator=(FragTrap const &frag)
{
	*this = frag;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &i)
{
	o << i.getValues();
	return o;
}
