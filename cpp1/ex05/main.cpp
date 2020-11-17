/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 03:46:01 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 14:17:08 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int			main(void)
{
	Human	man;
	Human	woman;

	std::cout << "ID brain : " << man.identify() << std::endl;
	std::cout << "ID brain : " << woman.identify() << std::endl << std::endl;
	std::cout << "ID brain : " << man.getBrain().identify() << std::endl;
	std::cout << "ID brain : " << woman.getBrain().identify() << std::endl;
	return 0;
}
