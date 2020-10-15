/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:45:14 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/15 18:32:35 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class	Enemy
{
public:

	Enemy(void);
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &src);
	Enemy &operator=(Enemy const &src);
	virtual ~Enemy();

	std::string		getType(void) const;
	int				getHP(void) const;

	virtual void	takeDamage(int amount);

protected:

	int			hp;
	std::string	type;

};

std::ostream	&operator<<(std::ostream &o, Enemy const &i);

#endif
