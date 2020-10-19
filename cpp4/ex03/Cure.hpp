/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:14:05 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 16:52:50 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria
{
public:

	Cure(void);
	Cure(Cure const &src);
	Cure &operator=(Cure const &src);
	virtual ~Cure();

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);

};

#endif
