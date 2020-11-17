/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:05:34 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 17:25:52 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
public:

	FragTrap(void);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &src);
	virtual ~FragTrap();

	void	init_spec(void);
	int		vaulthunter_dot_exe(std::string const &target);

private:

	void	init_vars(void);

};

// std::ostream	&operator<<(std::ostream &o, FragTrap const &i);

# define FT_CONST_LEVEL 1
# define FT_CONST_HIT_POINTS 100
# define FT_CONST_ENERGY_POINTS 100
# define FT_CONST_MAX_HIT_POINTS 100
# define FT_CONST_MAX_ENERGY_POINTS 100
# define FT_CONST_MELEE_ATTACK_DAMAGE 30
# define FT_CONST_RANGED_ATTACK_DAMAGE 20
# define FT_CONST_ARMOR_DAMAGE_REDUCTION 5

# define MSG_VAULTHUNTER_DOT_EXE						\
	COLOR_BLUE_(this->type) << " " << this->name <<		\
	" attaque " << COLOR_BLUE_(target) <<				\
	" avec " << weapons[ft_rand(4)] <<					\
	" via " << COLOR_BLUE_("vaulthunter_dot_exe !")

#endif
