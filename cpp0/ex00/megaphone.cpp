/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 11:47:38 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/05 12:23:28 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	std::cout << str;
}

int		main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
		megaphone(argv[i++]);
	std::cout << std::endl;
	return (0);
}
