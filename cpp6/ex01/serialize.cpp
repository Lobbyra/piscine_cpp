/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:36:09 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 11:51:27 by jecaudal         ###   ########.fr       */
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
		while (isalnum(str[i] = ft_rand() % 256) == 0)
			;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	*serialize(void)
{
	int		n;
	int		*n_ptr;
	char	*s1;
	char	*s2;
	char	*serial = new char[20];

	n = ft_rand();
	n_ptr = &n;
	s1 = str_rand(8);
	s2 = str_rand(8);
	memcpy(serial, static_cast<void*>(s1), 8);
	memcpy(serial + 8, reinterpret_cast<void*>(n_ptr), 4);
	memcpy(serial + 12, static_cast<void*>(s2), 8);
	delete s1;
	delete s2;
	return (static_cast<void*>(serial));
}
