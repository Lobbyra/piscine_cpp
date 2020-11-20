/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:18:05 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 14:31:15 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

int		main()
{
	Sorcerer robert("Robert", "the Magnificient");
	std::cout << std::endl;

	Victim	jim("Jimmy");
	Victim	*fake_victim = new Peon("fake_victim");
	Peon	joe("Joe");
	std::cout << std::endl;

	std::cout << robert << jim << joe << *fake_victim;
	std::cout << std::endl;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(*fake_victim);
	std::cout << std::endl;

	delete fake_victim;
	return (0);
}
