/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 05:16:25 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/13 12:21:43 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <sstream>
# include "FragTrapMsg.hpp"
# include "GlobalTrap.hpp"

class	FragTrap
{
public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &src);
	~FragTrap();

	std::string getName(void) const;
	int		getArmordamagereduction(void) const;
	int		getLevel(void) const;
	int		getHitPoints(void) const;
	int		getEnergyPoints(void) const;
	int		getMaxhitpoint(void) const;
	int		getMeleeattackdamage(void) const;
	int		getRangedttackdamage(void) const;

	void	setName(std::string name);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	meleeAttack(std::string const &target) const;
	void	rangedAttack(std::string const &target) const;
	int		vaulthunter_dot_exe(std::string const &target);
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

private:

	std::string type;
	void	init_vars(void);

};

std::ostream	&operator<<(std::ostream &o, FragTrap const &i);

/*
**	CONST VALUES
**	Bellow are const of a new FragTrap init.
*/

# define CONST_LEVEL 1
# define CONST_HIT_POINTS 100
# define CONST_ENERGY_POINTS 100
# define CONST_MAX_HIT_POINTS 100
# define CONST_MAX_ENERGY_POINTS 100
# define CONST_MELEE_ATTACK_DAMAGE 30
# define CONST_RANGED_ATTACK_DAMAGE 20
# define CONST_ARMOR_DAMAGE_REDUCTION 5

#endif
