/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:37:21 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 14:52:45 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string c_name, std::string c_type) : name(c_name), type(c_type)
{
	return ;
}

void	Zombie::advert(void)
{
	std::cout << "<" << this->name << " " << this->type << "> Braiiiiiiinnnssss ..." << std::endl;
}

