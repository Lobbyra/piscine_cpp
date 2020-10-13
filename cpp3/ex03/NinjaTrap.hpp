/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:28:26 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/13 17:55:42 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "GlobalTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class	NinjaTrap
{
public:

	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap &operator=(NinjaTrap const &src);
	~NinjaTrap();

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setName(std::string name);

	std::string getType(void) const;
	std::string getName(void) const;
	int		getArmordamagereduction(void) const;
	int		getLevel(void) const;
	int		getHitPoints(void) const;
	int		getEnergyPoints(void) const;
	int		getMaxhitpoint(void) const;
	int		getMeleeattackdamage(void) const;
	int		getRangedttackdamage(void) const;
	void	ninjaShoebox(FragTrap const &target);
	void	ninjaShoebox(ScavTrap const &target);
	void	ninjaShoebox(ClapTrap const &target);
	void	ninjaShoebox(NinjaTrap const &target);
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
	void init_vars(void);

};

std::ostream	&operator<<(std::ostream &o, NinjaTrap const &i);

# define NT_CONST_LEVEL 1
# define NT_CONST_HIT_POINTS 60
# define NT_CONST_ENERGY_POINTS 120
# define NT_CONST_MAX_HIT_POINTS 60
# define NT_CONST_MAX_ENERGY_POINTS 120
# define NT_CONST_MELEE_ATTACK_DAMAGE 60
# define NT_CONST_RANGED_ATTACK_DAMAGE 5
# define NT_CONST_ARMOR_DAMAGE_REDUCTION 0

# define NT_MSG_CONSTRUCTOR								\
	"Un " << COLOR_BLUE_(this->type) << " sort de l'ombre !"

# define NT_MSG_CONSTRUCTOR_STRING					\
	"Un " << COLOR_BLUE_(this->type) << " nommé "	\
	COLOR_BLUE << this->name << COLOR_RESET <<		\
	" viens de l'ombre !"

# define NT_MSG_CONSTRUCTOR_COPY								\
	COLOR_BLUE_(this->type) << " s'approche de " << src.name << \
	" et branche son cable USB"

# define NT_MSG_DESTRUCTOR								\
	COLOR_BLUE_(this->type) << " " << COLOR_BLUE_(this->name) << " *s'arrête et tombe*"

# define NT_MSG_RANGED_ATTACK										\
	COLOR_BLUE_(this->type) << " " << this->name << COLOR_RESET << 	\
	" attaque " << COLOR_BLUE << target << COLOR_RESET <<			\
	" à distance, causant " <<										\
	COLOR_RED << "5" << COLOR_RESET " points de degats !"

# define NT_MSG_MELEE_ATTACK										\
	COLOR_BLUE_(this->type) << " " << this->name << COLOR_RESET << 	\
	" attaque " << COLOR_BLUE << target << COLOR_RESET <<			\
	" au corps à corps, causant " <<								\
	COLOR_RED << "60" << COLOR_RESET " points de degats !"

# define NT_MSG_TAKE_DAMAGE													\
	COLOR_BLUE_(this->type) << " " << this->name << COLOR_RESET << 			\
	" à perdu " << COLOR_RED << total_damage << COLOR_RESET " boulon(s)."

# define NT_MSG_BE_REPAIRED													\
	COLOR_BLUE_(this->type) << " " << this->name << COLOR_RESET << 			\
	" s'est revissé " << COLOR_GREEN << parts[ft_rand(4)] << COLOR_RESET	\
	" ce qui lui rapporte " << COLOR_GREEN << amount << COLOR_RESET " HP."

# define NT_MSG_NOT_ENOUGH_ENERGY									\
	COLOR_BLUE_(this->type) << " " << this->name << COLOR_RESET << 	\
	" n'a pas assez d'énergie pour attaquer avec "					\
	COLOR_BLUE "challengeNewcomer.\n" COLOR_RESET					\
	"        Faites en sorte que ce bout de metal se répare !"

# define NT_MSG_NINJATTACK_FT \
	COLOR_BLUE_(this->type) << " attaque " << COLOR_BLUE_(target.getType()) <<	\
	" " << COLOR_BLUE_(target.getName()) << " avec " <<							\
	"une serie de shuriken."

# define NT_MSG_NINJATTACK_ST \
	COLOR_BLUE_(this->type) << " attaque " << COLOR_BLUE_(target.getType()) <<	\
	" " << COLOR_BLUE_(target.getName()) << " avec " <<							\
	"un coup bas sournois."

# define NT_MSG_NINJATTACK_CT \
	COLOR_BLUE_(this->type) << " attaque " << COLOR_BLUE_(target.getType()) <<	\
	" " << COLOR_BLUE_(target.getName()) << " en " <<							\
	"enfoncant son katana dans l'oeil."

# define NT_MSG_NINJATTACK_NT \
	COLOR_BLUE_(this->type) << " attaque " << COLOR_BLUE_(target.getType()) <<	\
	" " << COLOR_BLUE_(target.getName()) << " avec " <<							\
	"une attaque du livre interdit des sous sols de shibuya."


#endif
