/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 05:07:25 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/08 16:29:24 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->rawbits = 0;
	return ;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawbits = value << this->point_pos;
	return ;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawbits = roundf(value * (1 << this->point_pos));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Assigment operator called" << std::endl;
	this->rawbits = src.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &s, Fixed const &fixed)
{
	s << fixed.toFloat();
	return s;
}

int		Fixed::getRawBits(void) const
{
	return (this->rawbits);
}

void	Fixed::setRawBits(int const rawbits)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawbits = rawbits;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->rawbits) / (1 << this->point_pos));
}

int		Fixed::toInt(void) const
{
	return (this->rawbits >> this->point_pos);;
}
