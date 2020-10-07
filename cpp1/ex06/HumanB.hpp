/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 08:37:15 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 10:41:20 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
public:

	HumanB(std::string c_name);

	void	attack(void) const;
	void	setWeapon(Weapon &weapon);

private:

	std::string	name;
	Weapon *weapon;

};

#endif
