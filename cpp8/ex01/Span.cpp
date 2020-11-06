/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:40:54 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/06 11:19:55 by jecaudal         ###   ########.fr       */
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
	std::vector	<int>spans;

	std::sort(_s.begin(), _s.end());
	for (std::vector<int>::const_iterator i = _s.begin(); i + 1 != _s.end(); i++)
		spans.push_back(abs(*i - *(i + 1)));
	return (*std::min_element(spans.begin(), spans.end()));
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
