/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 04:17:35 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 04:56:17 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain	Human::getBrain() const
{
	return (this->brain);
}

std::string	Human::identify(void) const
{
	return (this->brain.identify());
}
