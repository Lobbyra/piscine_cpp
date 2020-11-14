/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:50:09 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/13 15:44:59 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
