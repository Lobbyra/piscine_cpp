/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:19:35 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 12:49:25 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
void	FragTrap::init_vars(void)
{
	this->type = "FR4G-TP";
	this->level = FT_CONST_LEVEL;
	this->hit_points = FT_CONST_HIT_POINTS;
	this->energy_points = FT_CONST_ENERGY_POINTS;
	this->max_energy_points = FT_CONST_MAX_ENERGY_POINTS;
	this->max_hit_points = FT_CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = FT_CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = FT_CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = FT_CONST_ARMOR_DAMAGE_REDUCTION;
}

FragTrap::FragTrap(void) : ClapTrap()
{
	init_vars();
	std::cout << "Un " << COLOR_BLUE_("FR4G-TP") <<		\
	" viens de sortir de sa boite !" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	init_vars();
	std::cout << "Un " << COLOR_BLUE_("FR4G-TP") <<		\
	" viens de sortir de sa boite !" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
: ClapTrap(src)
{
	std::cout << "Un " << COLOR_BLUE_("FR4G-TP") <<		\
	" viens de sortir de sa boite !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << COLOR_BLUE_("FR4G-TP") << " " <<	\
	COLOR_BLUE_(this->name) << " *s'arrête et tombe*" << std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

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

	if (this->energy_points < 25)
	{
		std::cout << MSG_NOT_ENOUGH_ENERGY_VAULT << std::endl;
		return (1);
	}
	else
	{
		this->energy_points -= 25;
		std::cout << MSG_VAULTHUNTER_DOT_EXE << std::endl;
	}
	return (0);
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
FragTrap	&FragTrap::operator=(FragTrap const &src)
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
