/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 03:36:50 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 03:40:16 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string hi = "HI THIS IS BRAIN";
	std::string	*ptr_hi = &hi;
	std::string	&ref_hi = hi;

	std::cout << *ptr_hi << std::endl;
	std::cout << ref_hi << std::endl;
	return (0);
}
