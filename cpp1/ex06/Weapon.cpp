/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 08:14:00 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 08:17:39 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string c_type) : type(c_type)
{
	return ;
}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string name)
{
	this->type = name;
}
