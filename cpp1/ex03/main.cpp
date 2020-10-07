/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 02:47:47 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 03:27:14 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde h1(10);
	ZombieHorde h2(9);
	ZombieHorde h3(8);
	ZombieHorde h4(7);
	ZombieHorde h5(0);

	h1.announce();
	h2.announce();
	h3.announce();
	h4.announce();
	h5.announce();
	return (0);
}
