/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 03:46:38 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 07:53:47 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify() const
{
	std::stringstream	ss;

	ss << std::setiosflags(std::ios::uppercase);
	ss << this;
	return (ss.str());
}

Brain::Brain()
{
	this->qi = rand() % 200;
	return ;
}
