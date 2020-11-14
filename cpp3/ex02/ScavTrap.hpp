/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:17:11 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 12:12:08 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrapMsg.hpp"

class	ScavTrap : virtual public ClapTrap
{
public:

	ScavTrap(void);
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &src);
	virtual ~ScavTrap();

	void	challengeNewcomer(std::string const &target);

private:

	void	chall_coinflip(std::string const &target);
	void	chall_money(std::string const &target);
	void	chall_ageguessing(std::string const &target);
	void	chall_pinkyfinger(std::string const &target);
	void	chall_rock_paper_scissors(std::string const &target);
	void	init_vars(void);

};

// std::ostream	&operator<<(std::ostream &o, ScavTrap const &i);

typedef void (ScavTrap::*t_ft_chall)(std::string const &);

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
