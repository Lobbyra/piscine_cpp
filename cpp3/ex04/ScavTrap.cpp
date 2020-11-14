/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:56:15 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 12:49:48 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
void	ScavTrap::init_vars(void)
{
	this->type = "SC4V-TP";
	this->level = SC_CONST_LEVEL;
	this->hit_points = SC_CONST_HIT_POINTS;
	this->energy_points = SC_CONST_ENERGY_POINTS;
	this->max_energy_points = SC_CONST_MAX_ENERGY_POINTS;
	this->max_hit_points = SC_CONST_MAX_HIT_POINTS;
	this->melee_attack_damage = SC_CONST_MELEE_ATTACK_DAMAGE;
	this->range_attack_damage = SC_CONST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = SC_CONST_ARMOR_DAMAGE_REDUCTION;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
	init_vars();
	std::cout << "Un " << COLOR_BLUE_("SC4V-TP") <<		\
	" viens de sortir de sa boite !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const &name)
: ClapTrap(name)
{
	init_vars();
	std::cout << "Un " << COLOR_BLUE_("SC4V-TP") <<		\
	" viens de sortir de sa boite !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
: ClapTrap(src)
{
	std::cout << "Un " << COLOR_BLUE_("SC4V-TP") <<		\
	" viens de sortir de sa boite !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << COLOR_BLUE_("SC4V-TP") << " " <<	\
	COLOR_BLUE_(this->name) << " *s'arrête et tombe*" << std::endl;
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/
void	ScavTrap::chall_rock_paper_scissors(std::string const &target)
{
	int			draw_scav;
	int			draw_target;
	std::string items[] =
	{
		"pierre",
		"ciseaux",
		"feuille"
	};

	while ((draw_scav = ft_rand(3)) == (draw_target = ft_rand(3)))
		;
	std::cout << MSG_CHALL_RPC << std::endl;
	std::cout << MSG_CHALL_RPC_SCAV_DRAW << std::endl;
	std::cout << MSG_CHALL_RPC_TARGET_DRAW << std::endl;
	if ((draw_scav == 0 && draw_target == 1) || (draw_scav == 1 && draw_target == 2)
		|| (draw_scav == 2 && draw_target == 0))
		std::cout << MSG_CHALL_RPC_SCAV_WIN << std::endl;
	else
		std::cout << MSG_CHALL_RPC_SCAV_LOOSE << std::endl;
	return ;
}

void	ScavTrap::chall_coinflip(std::string const &target)
{
	int draw_coin;

	draw_coin = ft_rand(2);
	std::cout << MSG_CHALL_COIN << std::endl;
	if (draw_coin == 0)
		std::cout << MSG_CHALL_COIN_PILE << std::endl;
	else
		std::cout << MSG_CHALL_COIN_FACE << std::endl;
	std::cout << MSG_CHALL_COIN_ESCAPE << std::endl;
	std::cout << MSG_CHALL_COIN_TARGET_REACT << std::endl;
	return ;
}

void	ScavTrap::chall_money(std::string const &target)
{
	int	amount_scav_ask;
	int	amount_target_have;

	std::cout << MSG_CHALL_MONEY << std::endl;
	amount_scav_ask = ft_rand(100);
	std::cout << MSG_CHALL_MONEY_ASK << std::endl;
	amount_target_have = ft_rand(100);
	std::cout << MSG_CHALL_MONEY_HAVE << std::endl;
	if (amount_scav_ask > amount_target_have)
		std::cout << MSG_CHALL_MONEY_NENOUGH << std::endl;
	else
		std::cout << MSG_CHALL_MONEY_ENOUGH << std::endl;
	return ;
}

void	ScavTrap::chall_ageguessing(std::string const &target)
{
	int	age_scav;
	int	age_guess;

	std::cout << MSG_CHALL_AGE << std::endl;
	age_scav = ft_rand(5) + 1;
	age_guess = ft_rand(5) + 1;
	std::cout << MSG_CHALL_GUESS << std::endl;
	if (age_guess == age_scav)
	{
		std::cout << MSG_CHALL_AGE_SUCCESS << std::endl;
		return ;
	}
	else
		std::cout << MSG_CHALL_AGE_LOOSE1 << std::endl;
	age_guess = ft_rand(3) + 1;
	std::cout << MSG_CHALL_GUESS << std::endl;
	if (age_guess == age_scav)
		std::cout << MSG_CHALL_AGE_SUCCESS << std::endl;
	else
		std::cout << MSG_CHALL_AGE_LOOSE2 << std::endl;
	return ;
}

void	ScavTrap::chall_pinkyfinger(std::string const &target)
{
	int draw;

	std::cout << MSG_PINKY << std::endl;
	std::cout << MSG_PINKY_ASK << std::endl;
	draw = ft_rand(2);
	if (draw == 0)
	{
		std::cout << MSG_PINKY_WIN << std::endl;
		std::cout << MSG_PINKY_TARGET_REACT_WIN << std::endl;
	}
	else
	{
		std::cout << MSG_PINKY_LOOSE << std::endl;
		std::cout << MSG_PINKY_TARGET_REACT_LOOSE << std::endl;
	}
	return ;
}

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

/*
**	/// OPERATOR OVERLOADS PART \\
*/
ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
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
