/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:41:10 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:19:33 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
public:

	PowerFist(void);
	PowerFist(std::string &name, int apcost, int damage);
	PowerFist(PowerFist const &src);
	PowerFist &operator=(PowerFist const &src);
	virtual ~PowerFist();

	virtual void attack(void) const;
};

# define PF_CONST_APCOST 8
# define PF_CONST_DAMAGE 50
# define PF_CONST_NAME "Power Fist"



#endif
