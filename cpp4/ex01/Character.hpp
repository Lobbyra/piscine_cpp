/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:03:25 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:35:57 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

class	Character
{
public:

	Character(void);
	Character(std::string const &name);
	Character(Character const &src);
	Character &operator=(Character const &src);
	virtual ~Character();

	int					getAp(void) const;
	std::string const	getName(void) const;
	std::string const	getWeaponName(void) const;

	void	recoverAP(void);
	void	equip(AWeapon *w);
	void	attack(Enemy *target);
	bool	isequiped(void) const;

private:

	std::string name;
	int			ap; //Action Points
	AWeapon		*weapon;

};

std::ostream	&operator<<(std::ostream &o, Character const &i);

# define CH_CONST_APDEFAULT 40

# define CH_MSG_ATTACK			\
	this->name << " attack " << target->getType() <<			\
	" with a " << this->weapon->getName()

# define CH_MSG_NENOUGHAP		\
	this->name << " have not enough AP to attack with" << this->weapon->getName()

# define CH_MSG_DISPLAY			\
	i.getName() << " has " << i.getAp() << " AP and carries a "	\
	<< i.getWeaponName()

# define CH_MSG_DISPLAY_NOWEA	\
	i.getName() << " has " << i.getAp() << " AP and is unarmed"	\

#endif
