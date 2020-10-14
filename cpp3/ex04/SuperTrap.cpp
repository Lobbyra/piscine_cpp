/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 17:57:24 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/14 15:16:18 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "GlobalTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : FragTrap("default"), NinjaTrap("default"), name("default"),
level(FragTrap::level), hit_points(FragTrap::hit_points), 
energy_points(NinjaTrap::energy_points), max_energy_points(NinjaTrap::max_energy_points),
max_hit_points(FragTrap::max_hit_points), melee_attack_damage(NinjaTrap::melee_attack_damage),
range_attack_damage(FragTrap::range_attack_damage),
armor_damage_reduction(FragTrap::armor_damage_reduction)
{
	this->type = "SUP3R-TP";
	this->name = "default";
	std::cout << COLOR_BLUE_(this->type) << " " << COLOR_BLUE_(this->name) \
	<< " assemblé et opérationnel !" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name), name(name),
level(FragTrap::level), hit_points(FragTrap::hit_points), 
energy_points(NinjaTrap::energy_points), max_energy_points(NinjaTrap::max_energy_points), 
max_hit_points(FragTrap::max_hit_points), melee_attack_damage(NinjaTrap::melee_attack_damage),
range_attack_damage(FragTrap::range_attack_damage),
armor_damage_reduction(FragTrap::armor_damage_reduction)
{
	this->type = "SUP3R-TP";
	std::cout << COLOR_BLUE_(this->type) << " " << COLOR_BLUE_(this->name) \
	<< " assemblé et opérationnel !" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src) : FragTrap(src.name), NinjaTrap(src.name), name(src.name), level(src.level), hit_points(src.hit_points), 
energy_points(src.energy_points), max_energy_points(src.max_energy_points), 
max_hit_points(src.max_hit_points), melee_attack_damage(src.melee_attack_damage),
range_attack_damage(src.range_attack_damage),
armor_damage_reduction(src.armor_damage_reduction)
{
	this->type = "SUP3R-TP";
	this->level = src.level;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->max_hit_points = src.max_hit_points;
	this->melee_attack_damage = src.melee_attack_damage;
	this->range_attack_damage = src.range_attack_damage;
	this->armor_damage_reduction = src.armor_damage_reduction;
	std::cout << COLOR_BLUE_(this->type) << " créé copié de " <<	\
	COLOR_BLUE_(src.name) << " et opérationnel !" << std::endl;
	*this = src;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << COLOR_BLUE_(this->type) << " de nom "	\
	<< COLOR_BLUE_(this->name) << " désassemblé !" << std::endl;
	return ;
}

void		SuperTrap::setName(std::string name)
{
	FragTrap::setName(name);
	NinjaTrap::setName(name);
	this->name = name;
}

void		SuperTrap::beRepaired(unsigned int amount)
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
	FragTrap::beRepairedquiet(amount);
	std::cout << MSG_BE_REPAIRED << std::endl;;
}

int		SuperTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->energy_points < 25)
	{
		std::cout << MSG_NOT_ENOUGH_ENERGY << std::endl;
		return (1);
	}
	FragTrap::vaulthunter_dot_exe(target);
	this->energy_points -= 25;
	return (0);
}

void		SuperTrap::takeDamage(unsigned int amount)
{
	FragTrap::takeDamage(amount);
}

std::string	SuperTrap::getType(void) const
{
	return (this->type);
}
std::string	SuperTrap::getName(void) const
{
	return (this->name);
}

int		SuperTrap::getArmordamagereduction(void) const
{
	return (this->armor_damage_reduction);
}

int		SuperTrap::getLevel(void) const
{
	return (this->level);
}

int		SuperTrap::getHitPoints(void) const
{
	return (this->hit_points);
}

int		SuperTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}

int		SuperTrap::getMaxEnergyPoints(void) const
{
	return (this->max_energy_points);
}

int		SuperTrap::getMaxhitpoint(void) const
{
	return (this->max_hit_points);
}

int		SuperTrap::getMeleeattackdamage(void) const
{
	return (this->melee_attack_damage);
}

int		SuperTrap::getRangedttackdamage(void) const
{
	return (this->range_attack_damage);
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &src)
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

void	SuperTrap::meleeAttack(std::string const &target) const
{
	this->NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const &target) const
{
	this->FragTrap::rangedAttack(target);
}

std::string	SuperTrap::getValues(void) const
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

std::ostream	&operator<<(std::ostream &o, SuperTrap const &i)
{
	o << i.getValues();
	return o;
}
