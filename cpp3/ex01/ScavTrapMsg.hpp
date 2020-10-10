/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapMsg.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:08:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/10 18:34:36 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	# FRAGTRAPMSG
**	This file used to store all message displayed in define.
*/

#ifndef FRAGTRAPMSG_HPP
# define FRAGTRAPMSG_HPP

/*
**	# MSG for actions
*/

# define SC_MSG_CONSTRUCTOR								\
	"Un " COLOR_BLUE "SC4V-TP" COLOR_RESET " est arrivé !"

# define SC_MSG_CONSTRUCTOR_STRING							\
	"Un " COLOR_BLUE "SC4V-TP" COLOR_RESET " nommé "	\
	COLOR_BLUE << this->name << COLOR_RESET <<			\
	" viens de sortir de sa boite !"

# define SC_MSG_DESTRUCTOR								\
	COLOR_BLUE_("SC4V-TP ") << COLOR_BLUE_(this->name) << " *s'arrête et tombe*"

# define SC_MSG_RANGED_ATTACK									\
	COLOR_BLUE "SC4V-TP " << this->name << COLOR_RESET << 	\
	" attaque " << COLOR_BLUE << target << COLOR_RESET <<	\
	" à distance, causant " <<								\
	COLOR_RED << "12" << COLOR_RESET " points de degats !"

# define SC_MSG_MELEE_ATTACK									\
	COLOR_BLUE "SC4V-TP " << this->name << COLOR_RESET << 	\
	" attaque " << COLOR_BLUE << target << COLOR_RESET <<	\
	" au corp à corps, causant " <<							\
	COLOR_RED << "17" << COLOR_RESET " points de degats !"

# define SC_MSG_TAKE_DAMAGE											\
	COLOR_BLUE "SC4V-TP " << this->name << COLOR_RESET << 			\
	" à perdu " << COLOR_RED << total_damage << COLOR_RESET " boulon(s)."

# define SC_MSG_BE_REPAIRED													\
	COLOR_BLUE "SC4V-TP " << this->name << COLOR_RESET << 					\
	" s'est revissé " << COLOR_GREEN << parts[rand() % 4] << COLOR_RESET	\
	" ce qui lui rapporte " << COLOR_GREEN << amount << COLOR_RESET " HP."

# define SC_MSG_NOT_ENOUGH_ENERGY								\
	COLOR_BLUE "SC4V-TP " << this->name << COLOR_RESET << 	\
	" n'a pas assez d'énergie pour attaquer avec "			\
	COLOR_BLUE "challengeNewcomer.\n" COLOR_RESET			\
	"        Faites en sorte que ce bout de metal se répare !"

/*
**	MSG for challenges
*/

# define MSG_CHALL_ANNOUNCE			\
	COLOR_BLUE "SC4V-TP " << this->name << COLOR_RESET					\
	" lance un challenge contre " COLOR_BLUE << target << COLOR_RESET	\
	" !"

# define MSG_CHALL_RPC				\
	COLOR_BLUE "SC4V-TP " COLOR_RESET "> Jouons à pierre papier ciseaux."

# define MSG_CHALL_RPC_SCAV_DRAW	\
	COLOR_BLUE "SC4V-TP " COLOR_RESET "> " << items[draw_scav] << " !"

# define MSG_CHALL_RPC_TARGET_DRAW	\
	COLOR_BLUE << target << COLOR_RESET " > " << items[draw_target] << " !"

# define MSG_CHALL_RPC_SCAV_WIN		\
	COLOR_BLUE "SC4V-TP " COLOR_RESET "> J'ai gagné !"

# define MSG_CHALL_RPC_SCAV_LOOSE	\
	COLOR_BLUE << target << COLOR_RESET "> J'ai gagné !"

# define MSG_CHALL_COIN			\
	COLOR_BLUE_("SC4V-TP") <<											\
	" > Je vais lancer une pièce, si c'est pile tu perds sinon, je gagne.\n"	\
	"*lance une piece*"

# define MSG_CHALL_COIN_PILE	\
	COLOR_BLUE_("SC4V-TP") << " > c'est pile, tu perds."

# define MSG_CHALL_COIN_FACE	\
	COLOR_BLUE_("SC4V-TP") << " > c'est face, je gagne."

# define MSG_CHALL_MONEY			\
	COLOR_BLUE_("SC4V-TP") << " > Pour cette fois il n'y a pas de challenge."

# define MSG_CHALL_MONEY_ASK		\
	COLOR_BLUE_("SC4V-TP") << " > Si tu me donnes " << amount_scav_ask <<	\
	" simflouz tu gagnes."

# define MSG_CHALL_MONEY_HAVE		\
	COLOR_BLUE_(target) << " > J'ai " << amount_target_have << " simflouz."

# define MSG_CHALL_MONEY_NENOUGH	\
	COLOR_BLUE_("SC4V-TP") << " > Attends je vais compter...\n" <<			\
	COLOR_BLUE_("SC4V-TP") << " > Il n'y a pas assez donc tu perds mais je"	\
	" garde tes simflouz."

# define MSG_CHALL_MONEY_ENOUGH		\
	COLOR_BLUE_("SC4V-TP") << " > Attends je vais compter...\n" <<	\
	COLOR_BLUE_("SC4V-TP") << " > Ca fera l'affaire, je gardes ces"	\
	" delicieux simflouz."

# define MSG_CHALL_AGE					\
	COLOR_BLUE_("SC4V-TP") << " > Tu vas devoir deviner mon age."

# define MSG_CHALL_GUESS				\
	COLOR_BLUE_(target) << " > Je ne sais pas je dirais " << age_guess << " ans."

# define MSG_CHALL_AGE_SUCCESS			\
	COLOR_BLUE_("SC4V-TP") << " > Bravo je t'ai sous-estimé.\n"	\
	COLOR_BLUE_("SC4V-TP") << " > Mon estimation de ta personne viens monter de 0.000001 sur 0.0000001."

# define MSG_CHALL_AGE_LOOSE1			\
	COLOR_BLUE_("SC4V-TP") << " > Tu es vraiment nul, pour cette fois je te laisse une derniere chance."	\

# define MSG_CHALL_AGE_LOOSE2			\
	COLOR_BLUE_("SC4V-TP") << " > Bon aller arrête de me faire perdre mon temp. "	\
	"J'ai " << COLOR_BLUE_(age_scav) << " ans enfin ! Ca se voit quand meme !"

# define MSG_CHALL_COIN_TARGET_REACT	\
	COLOR_BLUE_(target) << " > Je me sens comme laisé."

# define MSG_CHALL_COIN_ESCAPE	\
	COLOR_BLUE_("SC4V-TP") << " *s'echappe*"

# define MSG_PINKY			\
	COLOR_BLUE_("SC4V-TP") << " > Alors ce n'est pas moi qui va dire si tu gagnes...\n"	\
	COLOR_BLUE_("SC4V-TP") << " > C'est mon petit doigt imaginaire !!!!"

# define MSG_PINKY_ASK		\
	COLOR_BLUE_("SC4V-TP") << " > Alors petit doigt, est-ce que cette raclure de bidet va gagner ?"

# define MSG_PINKY_WIN		\
	COLOR_YELLOW_("Petit doigt imaginaire") << " > Il est pas très seduisant mais il gagne quand même."

# define MSG_PINKY_LOOSE	\
	COLOR_YELLOW_("Petit doigt imaginaire") << " > Quel horreur, jamais ce tas de boue gagne !"

# define MSG_PINKY_TARGET_REACT_WIN		\
	COLOR_BLUE_(target) << " > Merci mais tu abuses un peu je suis quand même bg."

# define MSG_PINKY_TARGET_REACT_LOOSE	\
	COLOR_BLUE_(target) << " > T'es completement fou c'est pas possible."


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
