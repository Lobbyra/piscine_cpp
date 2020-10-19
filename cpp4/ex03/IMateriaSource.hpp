/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:32:31 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 16:52:15 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource
{
public:

	virtual ~IMateriaSource() {}
	virtual void		learnMateria(AMateria *src) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;

};

#endif
