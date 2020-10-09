/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 05:16:25 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/09 05:37:32 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class	FragTrap
{
public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &src);
	~FragTrap();

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

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

	void	init_vars(void);

};

std::ostream	&operator<<(std::ostream const &o, FragTrap const &i);

#endif
