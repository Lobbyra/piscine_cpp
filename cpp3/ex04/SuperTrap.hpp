/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 17:57:09 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/13 18:47:03 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "GlobalTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
public:

	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
	SuperTrap &operator=(SuperTrap const &src);
	~SuperTrap();

	std::string	getValues(void) const;
	std::string	getType(void) const;
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

private:

	std::string	type;
	std::string	name;
	int			level;
	int			hit_points;
	int			energy_points;
	int			max_hit_points;
	int			melee_attack_damage;
	int			range_attack_damage;
	int			armor_damage_reduction;
	void		init_vars(void);

};

# define ST_CONST_LEVEL CONST_LEVEL;
# define ST_CONST_HIT_POINTS CONST_HIT_POINTS;
# define ST_CONST_ENERGY_POINTS NT_CONST_ENERGY_POINTS;
# define ST_CONST_MAX_HIT_POINTS NT_CONST_MAX_HIT_POINTS;
# define ST_CONST_MELEE_ATTACK_DAMAGE NT_CONST_MELEE_ATTACK_DAMAGE;
# define ST_CONST_RANGED_ATTACK_DAMAGE CONST_RANGED_ATTACK_DAMAGE;
# define ST_CONST_ARMOR_DAMAGE_REDUCTION CONST_ARMOR_DAMAGE_REDUCTION;

std::ostream	&operator<<(std::ostream const &o, SuperTrap const &i);

#endif
