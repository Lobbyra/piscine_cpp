/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 05:59:10 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/12 17:31:33 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <sstream>
# include "ScavTrapMsg.hpp"
# include "GlobalTrap.hpp"


class	ScavTrap
{
public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &src);
	~ScavTrap();

	int		getHitPoints(void);
	int		getEnergyPoints(void);
	void	setName(std::string name);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	meleeAttack(std::string const &target) const;
	void	rangedAttack(std::string const &target) const;
	void	challengeNewcomer(std::string const &target);
	std::string getValues(void) const;

protected:

	std::string name;

	int	level;
	int	hit_points;
	int	energy_points;
	int	max_hit_points;
	int	melee_attack_damage;
	int	range_attack_damage;
	int	armor_damage_reduction;

	void	chall_coinflip(std::string const &target);
	void	chall_money(std::string const &target);
	void	chall_ageguessing(std::string const &target);
	void	chall_pinkyfinger(std::string const &target);
	void	chall_rock_paper_scissors(std::string const &target);

private:

	std::string type;
	void	init_vars(void);

};

typedef void (ScavTrap::*t_ft_chall)(std::string const &);

std::ostream	&operator<<(std::ostream &o, ScavTrap const &i);

/*
**	CONST VALUES
**	Bellow are const of a new ScavTrap init.
*/

# define SC_CONST_LEVEL 1
# define SC_CONST_HIT_POINTS 100
# define SC_CONST_ENERGY_POINTS 50
# define SC_CONST_MAX_HIT_POINTS 100
# define SC_CONST_MAX_ENERGY_POINTS 50
# define SC_CONST_MELEE_ATTACK_DAMAGE 20
# define SC_CONST_RANGED_ATTACK_DAMAGE 15
# define SC_CONST_ARMOR_DAMAGE_REDUCTION 3

/*
**	Challenge functions declarations
*/

void	chall_money(std::string const &target);
void	chall_coinflip(std::string const &target);
void	chall_ageguessing(std::string const &target);
void	chall_pinkyfinger(std::string const &target);
void	chall_rock_paper_scissors(std::string const &target);

#endif
