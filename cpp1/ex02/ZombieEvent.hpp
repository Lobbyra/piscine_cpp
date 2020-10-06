/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:44:40 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 15:02:22 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class	ZombieEvent
{
public:	
	Zombie	*newZombie(std::string name);
	void	randomChump(void);
	void	setZombieType(std::string type_name);

private:
	std::string type;
};

std::string	ran_name(void);

#endif
