/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:36:02 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/04 15:35:00 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <exception>
# include <iostream>
# include <sstream>

class	Span
{
public:

	Span(unsigned int n);
	template <typename Iter>
	Span(Iter begin, Iter end);
	Span(Span const &src);
	Span &operator=(Span const &src);
	virtual ~Span();

	int		shortestSpan(void) const;
	int		longestSpan(void) const;
	void	addNumber(int n);

	std::string const str(void) const;

	std::vector<int> const &getNums(void) const;

private:

	Span(void);
	int			_size;
	int			_n_saved;
	std::vector <int>_s;

};

template <typename Iter>
Span::Span(Iter begin, Iter end) : _s(std::vector<int>(begin, end))
{
	return ;
}

std::ostream	&operator<<(std::ostream &o, Span const &i);

#endif
