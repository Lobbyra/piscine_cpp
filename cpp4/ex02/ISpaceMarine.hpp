/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 10:40:15 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/16 10:49:10 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISpaceMarine_HPP
# define ISpaceMarine_HPP

class	ISpaceMarine
{
public:

	virtual	~ISpaceMarine() {}
	virtual	ISpaceMarine	*clone() const = 0;
	virtual	void			battleCry() const = 0;
	virtual	void			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;

};

#endif
