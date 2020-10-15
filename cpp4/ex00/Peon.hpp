/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:01:27 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 14:22:01 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{
public:

	Peon(std::string name);
	Peon(Peon const &src);
	Peon &operator=(Peon const &src);
	virtual ~Peon();

	virtual std::string		getName(void) const;
	virtual void	polymorphed(void) const;

protected:
	Peon(void);

private:
	std::string name;

};

std::ostream	&operator<<(std::ostream &o, Victim const &i);

# define MSG_PEON_CONSTR	\
	"Zog zog."

# define MSG_PEON_DESTR	\
	"Bleuark..."

# define MSG_PEON_POLYD	\
	this->name << " was just polymorphed into a pink pony !"

#endif

