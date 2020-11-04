/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:38:14 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/03 17:07:38 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include "FtException.hpp"

template <typename T>
int		easyfind(T &cont, int n)
{
	if (std::find(cont.begin(), cont.end(), n) != cont.end())
		return (n);
	throw FtException("Number not found in container");
}

#endif
