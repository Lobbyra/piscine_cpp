/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:16:44 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 11:50:02 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
	Sorcerer &operator=(Sorcerer const &src);
	virtual ~Sorcerer();

	std::string getName(void) const;
	std::string getTitle(void) const;
	void		polymorph(Victim const &v);

private:

	Sorcerer(void);
	std::string name;
	std::string title;

};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i);

# define MSG_SORCERER_BORN	\
	this->name << ", " << this->title << ", is born !"

# define MSG_SORCERER_DEAD	\
	this->name << ", " << this->title << ", is dead."	\
	" Consequences will never be the same !"

# define MSG_SORCERER_INTRO	\
	"I am " << i.getName() << ", " << i.getTitle() << ", and i like ponies !"

#endif
