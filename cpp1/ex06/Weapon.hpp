/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 08:11:31 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 09:17:21 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
public:

	Weapon(std::string c_type);

	std::string const	&getType(void) const;
	void	setType(std::string type);

private:

	std::string type;
};

#endif
