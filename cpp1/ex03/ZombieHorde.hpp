/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:11:32 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 03:20:31 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class	ZombieHorde
{
public:

	void	announce(void) const;
	ZombieHorde(int n);
	~ZombieHorde();

private:

	int		n_zombies;
	Zombie	*horde;
	std::string	type;
};

#endif

