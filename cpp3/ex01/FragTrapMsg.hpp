/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrapMsg.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:08:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/09 09:42:23 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	# FRAGTRAPMSG
**	This file used to store all message displayed in define.
*/

#ifndef FRAGTRAPMSG_HPP
# define FRAGTRAPMSG_HPP

/*
**	# Global printing format
*/

# define COLOR_RESET "\033[0m"
# define COLOR_RED "\033[1;31m"
# define COLOR_BLUE "\033[1;34m"
# define COLOR_GREEN "\033[1;32m"
# define COLOR_WHITE "\033[1;37m"

# define COLOR_RED_(str) COLOR_RED << str << COLOR_RESET
# define COLOR_BLUE_(str) COLOR_BLUE << str << COLOR_RESET
# define COLOR_GREEN_(str) COLOR_GREEN << str << COLOR_RESET
# define COLOR_WHITE_(str) COLOR_WHITE << str << COLOR_RESET
# define COLOR_YELLOW_(str) COLOR_YELLOW << str << COLOR_RESET

/*
**	# MSG for actions
*/

# define MSG_CONSTRUCTOR								\
	"Un " COLOR_BLUE "FR4G-TP" COLOR_RESET " viens de sortir de sa boite !"

# define MSG_CONSTRUCTOR_STRING							\
	"Un " COLOR_BLUE "FR4G-TP" COLOR_RESET " nommé "	\
	COLOR_BLUE << this->name << COLOR_RESET <<			\
	" viens de sortir de sa boite !"

# define MSG_DESTRUCTOR								\
	"Un " COLOR_BLUE "FR4G-TP" COLOR_RESET " est rerentré dans sa boite !"

# define MSG_RANGED_ATTACK									\
	COLOR_BLUE "FR4G-TP " << this->name << COLOR_RESET << 	\
	" attaque " << COLOR_BLUE << target << COLOR_RESET <<	\
	" à distance, causant " <<								\
	COLOR_RED_(this->range_attack_damage) << " points de degats !"

# define MSG_MELEE_ATTACK									\
	COLOR_BLUE "FR4G-TP " << this->name << COLOR_RESET << 	\
	" attaque " << COLOR_BLUE << target << COLOR_RESET <<	\
	" au corp à corps, causant " <<							\
	COLOR_RED_(this->melee_attack_damage) << " points de degats !"

# define MSG_TAKE_DAMAGE											\
	COLOR_BLUE "FR4G-TP " << this->name << COLOR_RESET << 			\
	" à perdu " << COLOR_RED << total_damage << COLOR_RESET " boulon(s)."

# define MSG_BE_REPAIRED													\
	COLOR_BLUE "FR4G-TP " << this->name << COLOR_RESET << 					\
	" s'est revissé " << COLOR_GREEN << parts[rand() % 4] << COLOR_RESET	\
	" ce qui lui rapporte " << COLOR_GREEN << amount << COLOR_RESET " HP."

# define MSG_VAULTHUNTER_DOT_EXE											\
	COLOR_BLUE "FR4G-TP " << this->name << COLOR_RESET << 					\
	" attaque " << COLOR_BLUE << target << COLOR_RESET <<					\
	" avec " << weapons[rand() % 4] <<										\
	" via " COLOR_BLUE "vaulthunter_dot_exe !" COLOR_RESET

# define MSG_NOT_ENOUGH_ENERGY								\
	COLOR_BLUE "FR4G-TP " << this->name << COLOR_RESET << 	\
	" n'a pas assez d'énergie pour attaquer avec "			\
	COLOR_BLUE "vaulthunter_dot_exe.\n" COLOR_RESET			\
	"        Faites en sorte que ce bout de metal se répare !"

/*
**	# FragTrap::getValues() printing define
*/

# define VALS_LEVEL						\
	"level:\t\t" << this.level

# define VALS_HIT_POINTS				\
	"hit_point:\t" << this.hit_point

# define VALS_ENERGY_POINTS				\
	"hit_point:\t" << this.hit_point

# define VALS_MAX_HIT_POINTS			\
	"hit_point:\t" << this.hit_point

# define VALS_MELEE_ATTACK_DAMAGE		\
	"hit_point:\t" << this.hit_point

# define VALS_RANGE_ATTACK_DAMAGE 		\
	"hit_point:\t" << this.hit_point

# define VALS_ARMOR_DAMAGE_REDUCTION	\
	"hit_point:\t" << this.hit_point

#endif
