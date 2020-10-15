/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:19:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:42:59 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &src);
	PlasmaRifle &operator=(PlasmaRifle const &src);
	virtual ~PlasmaRifle();

	virtual void attack(void) const;
};

# define PR_CONST_APCOST 5
# define PR_CONST_DAMAGE 21
# define PR_CONST_NAME "Plasma Rifle"

#endif
