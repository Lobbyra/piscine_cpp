/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:02:54 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 12:48:10 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "main.hpp"

void	print_usage(void)
{
	std::cout << "ERROR : Wrong amount of arguments." << std::endl;
	std::cout << "./replace PATH \"STRING TO REPLACE\" \"REPLACEMENT STRING\"" << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		print_usage();
		return (1);
	}
	return (replace(argv[1], argv[2], argv[3]));
}
