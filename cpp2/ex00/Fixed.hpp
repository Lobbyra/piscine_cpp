/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 05:07:07 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/08 10:54:32 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
public:

	Fixed(void);
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &src);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int raw;
	int const static byte = 8;

};

std::ostream	&operator<<(std::ostream const &o, Fixed const &i);


#endif
