/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 05:15:12 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/13 16:22:35 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int rand_seed = 0;

void	FragTrap::init_vars(void)
{
	this->type = "FR4G-TP";
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
	init_vars();
	std::cout << MSG_CONSTRUCTOR_STRING << std::endl;
	return ;
}

FragTrap::FragTrap(std::string c_name) : name(c_name)
{
	init_vars();
	std::cout << MSG_CONSTRUCTOR_STRING << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	this->type = "FR4G-TP";
	this->name = src.name;
	this->level = src.level;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->max_hit_points = src.max_hit_points;
	this->melee_attack_damage = src.melee_attack_damage;
	this->range_attack_damage = src.range_attack_damage;
	this->armor_damage_reduction = src.armor_damage_reduction;
	std::cout << MSG_CONSTRUCTOR_COPY << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << MSG_DESTRUCTOR << std::endl;
	return ;
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
	{
		srand(time(NULL));
		rand_seed = time(NULL);
	}
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

std::string	FragTrap::getType(void) const
{
	return (this->type);
}

std::string	FragTrap::getName(void) const
{
	return (this->name);
}

int		FragTrap::getArmordamagereduction(void) const
{
	return (this->armor_damage_reduction);
}

int		FragTrap::getLevel(void) const
{
	return (this->level);
}
int		FragTrap::getHitPoints(void) const
{
	return (this->hit_points);
}
int		FragTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}
int		FragTrap::getMaxhitpoint(void) const
{
	return (this->max_hit_points);
}
int		FragTrap::getMeleeattackdamage(void) const
{
	return (this->melee_attack_damage);
}
int		FragTrap::getRangedttackdamage(void) const
{
	return (this->range_attack_damage);
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	this->name = src.getName();
	this->level = src.getLevel();
	this->hit_points = src.getHitPoints();
	this->energy_points = src.getEnergyPoints();
	this->max_hit_points = src.getHitPoints();
	this->melee_attack_damage = src.getMeleeattackdamage();
	this->range_attack_damage = src.getRangedttackdamage();
	this->armor_damage_reduction = src.getArmordamagereduction();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &i)
{
	o << i.getValues();
	return (o);
}
