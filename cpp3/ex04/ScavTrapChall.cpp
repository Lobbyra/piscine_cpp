/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapChall.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 09:14:12 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/10 19:50:58 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::chall_rock_paper_scissors(std::string const &target)
{
	int			draw_scav;
	int			draw_target;
	std::string items[] =
	{
		"pierre",
		"ciseaux",
		"feuille"
	};

	while ((draw_scav = ft_rand(3)) == (draw_target = ft_rand(3)))
		;
	std::cout << MSG_CHALL_RPC << std::endl;
	std::cout << MSG_CHALL_RPC_SCAV_DRAW << std::endl;
	std::cout << MSG_CHALL_RPC_TARGET_DRAW << std::endl;
	if ((draw_scav == 0 && draw_target == 1) || (draw_scav == 1 && draw_target == 2)
		|| (draw_scav == 2 && draw_target == 0))
		std::cout << MSG_CHALL_RPC_SCAV_WIN << std::endl;
	else
		std::cout << MSG_CHALL_RPC_SCAV_LOOSE << std::endl;
	return ;
}

void	ScavTrap::chall_coinflip(std::string const &target)
{
	int draw_coin;

	draw_coin = ft_rand(2);
	std::cout << MSG_CHALL_COIN << std::endl;
	if (draw_coin == 0)
		std::cout << MSG_CHALL_COIN_PILE << std::endl;
	else
		std::cout << MSG_CHALL_COIN_FACE << std::endl;
	std::cout << MSG_CHALL_COIN_ESCAPE << std::endl;
	std::cout << MSG_CHALL_COIN_TARGET_REACT << std::endl;
	return ;
}

void	ScavTrap::chall_money(std::string const &target)
{
	int	amount_scav_ask;
	int	amount_target_have;

	std::cout << MSG_CHALL_MONEY << std::endl;
	amount_scav_ask = ft_rand(100);
	std::cout << MSG_CHALL_MONEY_ASK << std::endl;
	amount_target_have = ft_rand(100);
	std::cout << MSG_CHALL_MONEY_HAVE << std::endl;
	if (amount_scav_ask > amount_target_have)
		std::cout << MSG_CHALL_MONEY_NENOUGH << std::endl;
	else
		std::cout << MSG_CHALL_MONEY_ENOUGH << std::endl;
	return ;
}

void	ScavTrap::chall_ageguessing(std::string const &target)
{
	int	age_scav;
	int	age_guess;

	std::cout << MSG_CHALL_AGE << std::endl;
	age_scav = ft_rand(5) + 1;
	age_guess = ft_rand(5) + 1;
	std::cout << MSG_CHALL_GUESS << std::endl;
	if (age_guess == age_scav)
	{
		std::cout << MSG_CHALL_AGE_SUCCESS << std::endl;
		return ;
	}
	else
		std::cout << MSG_CHALL_AGE_LOOSE1 << std::endl;
	age_guess = ft_rand(3) + 1;
	std::cout << MSG_CHALL_GUESS << std::endl;
	if (age_guess == age_scav)
		std::cout << MSG_CHALL_AGE_SUCCESS << std::endl;
	else
		std::cout << MSG_CHALL_AGE_LOOSE2 << std::endl;
	return ;
}

void	ScavTrap::chall_pinkyfinger(std::string const &target)
{
	int draw;

	std::cout << MSG_PINKY << std::endl;
	std::cout << MSG_PINKY_ASK << std::endl;
	draw = ft_rand(2);
	if (draw == 0)
	{
		std::cout << MSG_PINKY_WIN << std::endl;
		std::cout << MSG_PINKY_TARGET_REACT_WIN << std::endl;
	}
	else
	{
		std::cout << MSG_PINKY_LOOSE << std::endl;
		std::cout << MSG_PINKY_TARGET_REACT_LOOSE << std::endl;
	}
	return ;
}
