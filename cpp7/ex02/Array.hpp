/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:00:04 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/28 17:08:44 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>

template <typename T>
class	Array
{
public:

	Array(void);
	Array(unsigned int n);
	Array(Array const &src);
	Array &operator=(Array const &src);
	T &operator[](int const &index);
	const T &operator[](int const &index) const;
	virtual ~Array();

	unsigned int size(void) const;

private:

	T	*_arr;
	int _size;

};

template <typename T>
Array<T>::Array(void) : _arr()
{
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{
	return ;
}

template <typename T>
Array<T>::Array(Array const &src)
{
	_size = src.size();
	this->_arr = new T[_size];
	for (int i = 0; i < _size; i++)
	{
		this->_arr[i] = src[i];
	}
	*this = src;
}

template <typename T>
Array<T>::~Array()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
template <typename T>
Array<T>	&Array<T>::operator=(Array const &src)
{
	_size = src.size();
	this->_arr = new T[_size];
	for (int i = 0; i < _size; i++)
	{
		this->_arr[i] = src[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](int const &index)
{
	if (index >= _size)
		throw std::exception();
	return (this->_arr[index]);
}

template <typename T>
const T	&Array<T>::operator[](int const &index) const
{
	if (index >= _size)
		throw std::exception();
	return (this->_arr[index]);
}

#endif
