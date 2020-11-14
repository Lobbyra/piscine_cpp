/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:32:04 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 12:49:12 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
ClapTrap::ClapTrap(void)
: name("default")
{
	std::cout << COLOR_BLUE_("CL4P-TP") <<		\
	" assemblé !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const &name)
: name(name)
{
	std::cout << COLOR_BLUE_("CL4P-TP") <<		\
	" assemblé !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << COLOR_BLUE_("CL4P-TP") <<		\
	" assemblé !" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << COLOR_BLUE_("CL4P-TP") << " " <<					\
	COLOR_BLUE_(this->name) << " *implose*" << std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

void		ClapTrap::setName(std::string name)
{
	this->name = name;
}

void		ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << MSG_RANGED_ATTACK << std::endl;
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
	if (this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	this->energy_points += amount;
	if (this->energy_points > this->max_energy_points)
		this->energy_points = this->max_energy_points;
	std::cout << MSG_BE_REPAIRED << std::endl;;
}

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
	return (this->max_energy_points);
}

int		ClapTrap::getMaxhitpoints(void) const
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

/*
**	/// OPERATOR OVERLOADS PART \\
*/
ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
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

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i)
{
	o << i.getValues();
	return (o);
}
