/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GlobalTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 09:17:05 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/10 18:28:24 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GlobalTrap.hpp"

int		random_seed = 0;

//	FT_RAND
//	This functions take a modulo and return a random int by modulo
//	This function NEED random_seed to avoid perput
int		ft_rand(int const modulo)
{
	if (random_seed != time(NULL))
	{
		srand(time(NULL));
		random_seed = time(NULL);
	}
	return (rand() % modulo);
}
