/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:06:56 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/16 15:54:58 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &src);
	AssaultTerminator &operator=(AssaultTerminator const &src);
	virtual ~AssaultTerminator();

	virtual	ISpaceMarine	*clone() const;
	virtual	void			battleCry() const;
	virtual	void			rangedAttack() const;
	virtual void			meleeAttack() const;

};

#endif
