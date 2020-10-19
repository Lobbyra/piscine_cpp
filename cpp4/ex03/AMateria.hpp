/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 09:35:20 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 15:43:27 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
public:

	AMateria(void);
	AMateria(AMateria const &src);
	AMateria(std::string const &type);
	AMateria &operator=(AMateria const &src);
	virtual ~AMateria();

	virtual std::string const	&getType(void) const;
	virtual unsigned int		getXP(void) const;
	virtual void	setType(std::string const &type);
	virtual void	setXP(int const xp);

	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);

private:

	unsigned int	_xp;
	std::string		_type;

};

std::ostream	&operator<<(std::ostream &o, AMateria const &i);

#endif

