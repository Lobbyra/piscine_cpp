/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapMsg.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:26:42 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/14 11:34:13 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAPMSG_HPP
# define CLAPTRAPMSG_HPP

/*
**	GLOBAL MESSAGE TOOLS
*/

# define COLOR_RESET "\033[0m"
# define COLOR_RED "\033[1;31m"
# define COLOR_BLUE "\033[1;34m"
# define COLOR_GREEN "\033[1;32m"
# define COLOR_WHITE "\033[1;37m"
# define COLOR_YELLOW "\033[1;93m"

# define COLOR_RED_(str) COLOR_RED << str << COLOR_RESET
# define COLOR_BLUE_(str) COLOR_BLUE << str << COLOR_RESET
# define COLOR_GREEN_(str) COLOR_GREEN << str << COLOR_RESET
# define COLOR_WHITE_(str) COLOR_WHITE << str << COLOR_RESET
# define COLOR_YELLOW_(str) COLOR_YELLOW << str << COLOR_RESET

int		ft_rand(int const modulo);

/*
**	SPECIFIC CLAPTRAP MESSAGES
*/

# define MSG_CONSTRUCTOR					\
	"Un " << COLOR_BLUE_(this->type) <<		\
	" viens de sortir de sa boite !"

# define MSG_CONSTRUCTOR_STRING						\
	"Un " << COLOR_BLUE_(this->type) << " nommé "	\
	COLOR_BLUE_(this->name) <<						\
	" viens de sortir de sa boite !"

# define MSG_DESTRUCTOR					\
	COLOR_BLUE_(this->type) << " " <<	\
	COLOR_BLUE_(this->name) << " *s'arrête et tombe*"

# define MSG_RANGED_ATTACK								\
	COLOR_BLUE_(this->type) << " " << this->name <<		\
	" attaque " << COLOR_BLUE_(target) <<				\
	" à distance, causant " <<							\
	COLOR_RED_(this->range_attack_damage) << " points de degats !"

# define MSG_MELEE_ATTACK								\
	COLOR_BLUE_(this->type) << " " << this->name <<		\
	" attaque " << COLOR_BLUE_(target) <<				\
	" au corps à corps, causant " <<					\
	COLOR_RED_(this->melee_attack_damage) << " points de degats !"

# define MSG_TAKE_DAMAGE									\
	COLOR_BLUE_(this->type) << " " << this->name <<			\
	" à perdu " << COLOR_RED_(total_damage) << " boulon(s)."

# define MSG_BE_REPAIRED													\
	COLOR_BLUE_(this->type) << " " << this->name << 						\
	" s'est revissé " << COLOR_GREEN_(parts[ft_rand(4)])	\
	" ce qui lui rapporte " << COLOR_GREEN_(amount) << " HP."

# define MSG_NOT_ENOUGH_ENERGY_VAULT							\
	COLOR_BLUE_(this->type) << " " << this->name <<			 	\
	" n'a pas assez d'énergie pour attaquer avec " <<			\
	COLOR_BLUE_("vaulthunter_dot_exe.\n") <<					\
	"        Faites en sorte que ce bout de metal se répare !"

# define MSG_NOT_ENOUGH_ENERGY_CHALL					\
	COLOR_BLUE_(this->type) << " " << this->name <<		\
	" n'a pas assez d'énergie pour attaquer avec " <<	\
	COLOR_BLUE_("challengeNewcomer.\n")					\
	"        Faites en sorte que ce bout de metal se répare !"

#endif
