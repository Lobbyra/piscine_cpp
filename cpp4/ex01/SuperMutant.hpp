/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:56:55 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:20:43 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperMutant_HPP
# define SuperMutant_HPP

# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
public:

	SuperMutant(void);
	SuperMutant(SuperMutant const &src);
	SuperMutant &operator=(SuperMutant const &src);
	virtual ~SuperMutant();

	virtual void	takeDamage(int amount);
};

# define SM_CONST_TYPE "Super Mutant"
# define SM_CONST_HP 170
# define SM_CONST_ARMOR 3

# define SM_MSG_CONSTR "Gaaah. Break everything !"
# define SM_MSG_DESTR "Aaargh..."

#endif
