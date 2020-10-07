/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 08:18:53 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 10:40:41 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
public:

	HumanA(std::string c_name, Weapon &c_weapon);

	void	attack(void) const;

private:

	std::string name;
	Weapon &weapon;

};

#endif
