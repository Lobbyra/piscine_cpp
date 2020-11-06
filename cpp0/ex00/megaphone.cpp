/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 11:47:38 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/06 11:43:29 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(std::string str)
{
	for (std::string::iterator i = str.begin(); i != str.end(); i++)
		if (*i >= 'a' && *i <= 'z')
			*i -= 32;
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
