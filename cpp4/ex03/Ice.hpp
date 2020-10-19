/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:44:40 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 14:53:12 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria
{
public:

	Ice(void);
	Ice(Ice const &src);
	Ice &operator=(Ice const &src);
	virtual ~Ice();

	virtual void	use(ICharacter &target);
	virtual AMateria	*clone(void) const;

};

#endif
