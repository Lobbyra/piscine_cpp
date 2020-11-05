/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:05:52 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/05 19:03:53 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
public:

	MutantStack(void);
	MutantStack(MutantStack const &src);
	MutantStack(std::stack<T> const &src);
	MutantStack &operator=(MutantStack const &src);
	virtual ~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator end(void) { return (this->c.end()); }
	iterator begin(void) { return (this->c.begin()); }

};

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src)
{
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(std::stack<T> const &src) : std::stack<T>(src)
{
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

/*
**	/// OPERATOR OVERLOADS PART \\
*/

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &src)
{
	this->c = src.c;
	return (*this);
}

#endif
