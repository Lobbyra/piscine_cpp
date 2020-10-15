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

	Victim	jim("Jimmy");
	Victim	*fake_victim = new Peon("fake_victim");
	Peon	joe("Joe");

	std::cout << robert << jim << joe << *fake_victim;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(*fake_victim);

	delete fake_victim;
	return (0);
}
