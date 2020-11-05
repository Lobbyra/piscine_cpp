/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:40:54 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/05 12:07:32 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "FtException.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Span::Span(void)
{
	return;
}

Span::Span(unsigned int n) : _size(n), _n_saved(0)
{
	return;
}

Span::Span(Span const &src)
{
	_s = src.getNums();
	_size = src.getSize();
	_n_saved = src.getNSaved();
	*this = src;
}

Span::~Span()
{
	return;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

int Span::shortestSpan(void)
{
	// THIS SHIT DONT WORK WITH 1,10,11
	// Save all span sorted in vector and return the lowest.
	// ---
	// if (_s.size() < 2)
	// 	throw FtException("Not enough number to get the shortest number.");
	// std::sort(_s.begin(), _s.end());
	// return (*(_s.begin() + 1) - *(_s.begin()));
}

int Span::longestSpan(void)
{
	if (_s.size() < 2)
		throw FtException("Not enough number to get the shortest number.");
	std::sort(_s.begin(), _s.end());
	return (*std::max_element(_s.begin(), _s.end()) - *(_s.begin()));
}

void Span::addNumber(int n)
{
	if (std::find(_s.begin(), _s.end(), n) != _s.end())
		throw FtException("Number gived already stored in span.");
	else
	{
		if (_n_saved < _size)
		{
			_s.push_back(n);
			_n_saved++;
		}
		else
			throw FtException("This span is full.");
	}
}

std::vector<int> const &Span::getNums(void) const
{
	return (_s);
}

int const	&Span::getSize(void) const
{
	return (_size);
}

int const	&Span::getNSaved(void) const
{
	return (_n_saved);
}

std::string const Span::str(void) const
{
	int i;
	std::stringstream ss;

	ss << "{";
	for (i = 0; i < _n_saved - 1; i++)
		ss << _s[i] << ", ";
	ss << _s[i];
	ss << "}";
	return (ss.str());
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Span &Span::operator=(Span const &src)
{
	_s = src.getNums();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Span const &i)
{
	o << "Array is : " << i.str();
	return (o);
}
