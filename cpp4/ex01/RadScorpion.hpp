/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:59:08 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 17:51:28 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class	RadScorpion : public Enemy
{
public:

	RadScorpion(void);
	RadScorpion(RadScorpion const &src);
	RadScorpion &operator=(RadScorpion const &src);
	virtual ~RadScorpion();

};

# define RS_CONST_HP 80
# define RS_CONST_TYPE "RadScorpion"

# define RS_MSG_CONSTR "* click click click *"
# define RS_MSG_DESTR "* SPROTCH *"

#endif
