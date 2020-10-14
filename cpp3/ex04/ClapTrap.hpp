
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:03:00 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/12 17:25:19 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "GlobalTrap.hpp"

class	ClapTrap : public FragTrap, public ScavTrap
{
public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &src);
	~ClapTrap();

	std::string	getType(void) const;
	std::string getName(void) const;
	int		getArmordamagereduction(void) const;
	int		getLevel(void) const;
	int		getHitPoints(void) const;
	int		getEnergyPoints(void) const;
	int		getMaxEnergyPoints(void) const;
	int		getMaxhitpoint(void) const;
	int		getMeleeattackdamage(void) const;
	int		getRangedttackdamage(void) const;

	void	setName(std::string name);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	meleeAttack(std::string const &target) const;
	void	rangedAttack(std::string const &target) const;
	std::string getValues(void) const;

private:

	std::string	type;
	std::string	name;
	int			level;
	int			hit_points;
	int			energy_points;
	int			max_energy_points;
	int			max_hit_points;
	int			melee_attack_damage;
	int			range_attack_damage;
	int			armor_damage_reduction;
	void		init_vars(void);

};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i);

# define CT_CONST_LEVEL CONST_LEVEL;
# define CT_CONST_HIT_POINTS CONST_HIT_POINTS;
# define CT_CONST_ENERGY_POINTS CONST_ENERGY_POINTS;
# define CT_CONST_MAX_ENERGY_POINTS CONST_MAX_ENERGY_POINTS;
# define CT_CONST_MAX_HIT_POINTS CONST_MAX_HIT_POINTS;
# define CT_CONST_MELEE_ATTACK_DAMAGE CONST_MELEE_ATTACK_DAMAGE;
# define CT_CONST_RANGED_ATTACK_DAMAGE CONST_RANGED_ATTACK_DAMAGE;
# define CT_CONST_ARMOR_DAMAGE_REDUCTION CONST_ARMOR_DAMAGE_REDUCTION;

#endif
