/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:56:08 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 17:54:36 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class	AWeapon
{
public:

	AWeapon(void);
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	AWeapon &operator=(AWeapon const &src);
	virtual ~AWeapon();

	std::string		getName(void) const;
	int				getAPCost(void) const;
	int				getDamage(void) const;
	virtual void	attack(void) const = 0;

protected:

	std::string name;
	int			apcost;
	int			damage;

};

#endif
