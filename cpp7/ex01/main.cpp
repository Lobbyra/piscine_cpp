/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 16:45:34 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 17:22:34 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.cpp"

int		plus_one(int i)
{
	return (i + 1);
}

float	half_divide(float n)
{
	return (n / 2);
}

std::string capitilizer(std::string str)
{
	int str_len = str.length();

	for (int i = 0; i < str_len; i++)
	{
		if (isalpha(str[i]) && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

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

int		main(int argc, char **argv)
{
	int			*i_arr = new int[5];
	float		*f_arr = new float[5];
	std::string	*s_arr = new std::string[5];

	for (int i = 0; i < 5; i++)
		i_arr[i] = ft_rand() % 50000;
	for (int i = 0; i < 5; i++)
		f_arr[i] = ft_rand() % 50000;
	for (int i = 0; i < 5; i++)
		s_arr[i] = str_rand(ft_rand() % 20);
	std::cout << "#  int array   #" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << i_arr[i] << std::endl;
	std::cout << "# float array  #" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << f_arr[i] << std::endl;
	std::cout << "# string array #" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << s_arr[i] << std::endl;
	std::cout << "# --- ITER --- #" << std::endl;
	iter(i_arr, 5, &plus_one);
	iter(f_arr, 5, &half_divide);
	iter(s_arr, 5, &capitilizer);
	std::cout << "#  int array   #" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << i_arr[i] << std::endl;
	std::cout << "# float array  #" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << f_arr[i] << std::endl;
	std::cout << "# string array #" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << s_arr[i] << std::endl;
	return (0);
}
