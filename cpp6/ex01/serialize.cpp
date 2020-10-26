/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:36:09 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/26 17:56:22 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

int rand_seed = 0;

static int	ft_rand(void)
{
	if (rand_seed == 0 || rand_seed != time(NULL))
	{
		rand_seed = time(NULL);
		srand(rand_seed);
	}
	return (rand());
}

static char	*str_rand(int len)
{
	int i = 0;
	char *str = new char[len + 1];

	while (i < len)
	{
		while (isalnum(str[i] = ft_rand() % 256))
			;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	*serialize(void)
{
	int		n;
	char	*s1;
	char	*s2;

	n = ft_rand();
	s1 = str_rand();
	s2 = str_rand();
}
