/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:33:15 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 11:44:05 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <sstream>
#include "ClapTrapMsg.hpp"

int		ft_rand(int mod);

class	ClapTrap
{
public:

	ClapTrap(void);
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &src);
	virtual ~ClapTrap();

	int			getLevel(void) const;
	int			getHitPoints(void) const;
	int			getMaxhitpoints(void) const;
	int			getEnergyPoints(void) const;
	int			getMaxEnergyPoints(void) const;
	int			getMeleeattackdamage(void) const;
	int			getRangedttackdamage(void) const;
	int			getArmordamagereduction(void) const;
	std::string	getName(void) const;
	std::string	getType(void) const;
	std::string	getValues(void) const;

	void	setName(std::string name);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	meleeAttack(std::string const &target) const;
	void	rangedAttack(std::string const &target) const;

protected:

	std::string name;
	std::string type;

	int	level;
	int	hit_points;
	int	energy_points;
	int	max_hit_points;
	int	max_energy_points;
	int	melee_attack_damage;
	int	range_attack_damage;
	int	armor_damage_reduction;

};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i);

#endif
