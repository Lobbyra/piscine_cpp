/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:40:54 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/04 16:11:16 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include "FtException.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Span::Span(void)
{
	return ;
}

Span::Span(unsigned int n) : _size(n), _n_saved(0)
{
	return ;
}

Span::Span(Span const &src)
{
	_s = src.getNums();
	*this = src;
}

Span::~Span()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

int		Span::shortestSpan(void) const
{
	std::vector <int>v;

	if (_s.size() < 2)
		throw FtException("Not enough number to get the shortest number.");
	for (std::vector<int>::const_iterator i = _s.begin(); i + 1 != _s.end(); i++)
		v.push_back(abs(*i - *(i + 1)));
	return (*min_element(v.begin(), v.end()));
}

int		Span::longestSpan(void) const
{
	std::vector <int>v;

	if (_s.size() < 2)
		throw FtException("Not enough number to get the shortest number.");
	for (std::vector<int>::const_iterator i = _s.begin(); i + 1 != _s.end(); i++)
		v.push_back(abs(*i - *(i + 1)));
	return (*max_element(v.begin(), v.end()));
}

void	Span::addNumber(int n)
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

std::vector<int> const	&Span::getNums(void) const
{
	return (_s);
}

std::string const	Span::str(void) const
{
	std::stringstream ss;

	ss << "{";
	for (std::vector<int>::const_iterator i = _s.begin(); i != _s.end(); i++)
		ss << *i << ", ";
	ss << "}";
	return (ss.str());
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Span	&Span::operator=(Span const &src)
{
	_s = src.getNums();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Span const &i)
{
	o << "Array is : " << i.str();
	return (o);
}
