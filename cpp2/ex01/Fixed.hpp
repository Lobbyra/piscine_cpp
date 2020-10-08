/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 05:07:07 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/08 15:56:53 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
public:

	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &src);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					rawbits;
	int const static	point_pos = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);


#endif
