/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:49:15 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 14:21:55 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class	Victim
{
public:

	Victim(std::string name);
	Victim(Victim const &src);
	Victim &operator=(Victim const &src);
	virtual ~Victim();

	virtual std::string		getName(void) const;
	virtual void	polymorphed(void) const;

protected:
	Victim(void);

private:
	std::string name;

};

std::ostream	&operator<<(std::ostream &o, Victim const &i);

# define MSG_VICTIM_CONSTR	\
	"A random victim called " << this->name << " just appeared !"

# define MSG_VICTIM_DESTR	\
	"The victim " << this->name << " died for no apparent reasons !"

# define MSG_VICTIM_INTRO	\
	"I'm " << i.getName() << " and I like otters !"

# define MSG_VICTIM_POLYD	\
	this->name << " was just polymorphed in a cute little sheep !"

#endif
