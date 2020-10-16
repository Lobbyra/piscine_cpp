/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:03:57 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/16 15:55:44 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &src);
	TacticalMarine &operator=(TacticalMarine const &src);
	virtual ~TacticalMarine();

	virtual	ISpaceMarine	*clone() const;
	virtual	void			battleCry() const;
	virtual	void			rangedAttack() const;
	virtual void			meleeAttack() const;

};

#endif
