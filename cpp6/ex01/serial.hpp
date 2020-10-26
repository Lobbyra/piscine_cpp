/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:47:25 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/26 17:52:29 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iostream>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
Data	*deserialize(void *raw);

#endif
