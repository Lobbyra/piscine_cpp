/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:35:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 15:27:41 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <sstream>
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
public:

	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	MateriaSource &operator=(MateriaSource const &src);
	virtual ~MateriaSource();

	virtual void		learnMateria(AMateria *src);
	virtual AMateria	*createMateria(std::string const &type);

	std::string const	getMaterias(void) const;
	AMateria			*getMateria(int const i) const;

private:

	AMateria	**_materias;
	int			_materias_count;

};

std::ostream	&operator<<(std::ostream &o, MateriaSource const &i);


#endif
