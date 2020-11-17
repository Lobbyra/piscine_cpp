/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:57:47 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 16:24:57 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperTrap_HPP
# define SuperTrap_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
public:

	SuperTrap(void);
	SuperTrap(SuperTrap const &src);
	SuperTrap(std::string const &name);
	SuperTrap &operator=(SuperTrap const &src);
	virtual ~SuperTrap();

private:
	void	init_vars(void);

};

# define SP_CONST_LEVEL FT_CONST_LEVEL
# define SP_CONST_HIT_POINTS FT_CONST_HIT_POINTS
# define SP_CONST_ENERGY_POINTS NT_CONST_ENERGY_POINTS
# define SP_CONST_MAX_ENERGY_POINTS NT_CONST_MAX_ENERGY_POINTS
# define SP_CONST_MAX_HIT_POINTS NT_CONST_MAX_HIT_POINTS
# define SP_CONST_MELEE_ATTACK_DAMAGE NT_CONST_MELEE_ATTACK_DAMAGE
# define SP_CONST_RANGED_ATTACK_DAMAGE FT_CONST_RANGED_ATTACK_DAMAGE
# define SP_CONST_ARMOR_DAMAGE_REDUCTION FT_CONST_ARMOR_DAMAGE_REDUCTION

#endif
