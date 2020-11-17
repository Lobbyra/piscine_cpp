/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 18:03:45 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 17:26:07 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NinjaTrap_HPP
# define NinjaTrap_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
public:

	NinjaTrap(void);
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap &operator=(NinjaTrap const &src);
	virtual ~NinjaTrap();

	void	ninjaShoebox(FragTrap const &target);
	void	ninjaShoebox(ScavTrap const &target);
	void	ninjaShoebox(NinjaTrap const &target);

	void	init_spec(void);

private:

	void	init_vars(void);

};

# define NT_CONST_LEVEL 1
# define NT_CONST_HIT_POINTS 60
# define NT_CONST_ENERGY_POINTS 120
# define NT_CONST_MAX_HIT_POINTS 60
# define NT_CONST_MAX_ENERGY_POINTS 120
# define NT_CONST_MELEE_ATTACK_DAMAGE 60
# define NT_CONST_RANGED_ATTACK_DAMAGE 5
# define NT_CONST_ARMOR_DAMAGE_REDUCTION 0

# define NT_MSG_NOT_ENOUGH_ENERGY							\
	COLOR_BLUE_(this->type) << " " << this->name << 		\
	" n'a pas assez d'énergie pour attaquer avec " <<		\
	COLOR_BLUE_("challengeNewcomer.\n") <<					\
	"        Faites en sorte que ce bout de metal se répare !"

# define NT_MSG_NINJATTACK_FT \
	COLOR_BLUE_(this->type) << " attaque " << COLOR_BLUE_(target.getType()) <<	\
	" " << COLOR_BLUE_(target.getName()) << " avec " <<							\
	"une gigantesque serie de 2 shurikens."

# define NT_MSG_NINJATTACK_ST \
	COLOR_BLUE_(this->type) << " attaque " << COLOR_BLUE_(target.getType()) <<	\
	" " << COLOR_BLUE_(target.getName()) << " avec " <<							\
	"un coup bas très très très très très très sournois."

# define NT_MSG_NINJATTACK_CT \
	COLOR_BLUE_(this->type) << " attaque " << COLOR_BLUE_(target.getType()) <<	\
	" " << COLOR_BLUE_(target.getName()) << " en " <<							\
	"enfoncant son katana dans l'oeil."

# define NT_MSG_NINJATTACK_NT \
	COLOR_BLUE_(this->type) << " attaque " << COLOR_BLUE_(target.getType()) <<	\
	" " << COLOR_BLUE_(target.getName()) << " avec " <<							\
	"une attaque du livre interdit des sous sols du 93."

#endif
