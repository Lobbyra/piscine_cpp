/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:09:24 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/16 17:27:11 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class	Squad : public ISquad
{
public:

	Squad(void);
	Squad(Squad const &src);
	Squad &operator=(Squad const &src);
	virtual ~Squad();

	virtual int getCount(void) const;
	virtual int push(ISpaceMarine *marine);
	virtual ISpaceMarine *getUnit(int n) const;
	void	free_marines(void);
	bool	is_marine_present(ISpaceMarine *marine) const;
	ISpaceMarine	**ismcpy(ISpaceMarine **dst);


private:

	int _count;
	ISpaceMarine	**_marines;

};

#endif
