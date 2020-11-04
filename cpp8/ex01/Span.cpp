/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:40:54 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/04 15:37:10 by jecaudal         ###   ########.fr       */
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
	int s_len = _s.size();

	if (s_len < 2)
		throw FtException("Not enough number to get the shortest number.");
	return (*min_element(_s.begin(), _s.end()));
}

int		Span::longestSpan(void) const
{
	int s_len = _s.size();

	if (s_len < 2)
		throw FtException("Not enough number to get the longest number.");
	return (*max_element(_s.begin(), _s.end()));
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
