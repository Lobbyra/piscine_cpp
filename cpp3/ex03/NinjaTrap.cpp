/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 10:45:33 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 13:44:04 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NinjaTrap.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
void	NinjaTrap::init_vars(void)
{
	this->type = "NINJ4-TP";
	this->level = NT_CONST_LEVEL;
	this->hit_points = NT_CONST_HIT_POINTS;
	this->energy_points = NT_CONST_ENERGY_POINTS;
	this->max_energy_points = NT_CONST_MAX_ENERGY_POINTS;
	this->max_hit_points = NT_CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = NT_CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = NT_CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = NT_CONST_ARMOR_DAMAGE_REDUCTION;
}

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	init_vars();
	std::cout <<													\
	"Un " << COLOR_BLUE_("NINJ4-TP") << " sort de l'ombre !" <<		\
	std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string const &name)
: ClapTrap(name)
{
	init_vars();
	std::cout <<													\
	"Un " << COLOR_BLUE_("NINJ4-TP") << " sort de l'ombre !" <<		\
	std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
: ClapTrap(src)
{
	std::cout <<													\
	"Un " << COLOR_BLUE_("NINJ4-TP") << " sort de l'ombre !" <<		\
	std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout <<	\
	COLOR_BLUE_("NINJ4-TP") << " se fais aspirer par l'obscurité de la RAM." << \
	std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

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
**	/// OPERATOR OVERLOADS PART \\
*/
NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &src)
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
