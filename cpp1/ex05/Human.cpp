/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 04:17:35 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 09:15:05 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain const	&Human::getBrain() const
{
	return (this->brain);
}

std::string	Human::identify(void) const
{
	return (this->brain.identify());
}
