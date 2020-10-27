/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 12:13:23 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 12:19:55 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int		main()
{
	Base	c_base;
	A		c_a;
	B		c_b;
	C		c_c;
	Base	*p_base = &c_base;
	A		*p_a = &c_a;
	B		*p_b = &c_b;
	C		*p_c = &c_c;
	Base	&r_base = c_base;
	Base	&r_a = c_a;
	Base	&r_b = c_b;
	Base	&r_c = c_c;

	identify_from_pointer(p_base);
	identify_from_pointer(p_a);
	identify_from_pointer(p_b);
	identify_from_pointer(p_c);
	identify_from_reference(r_base);
	identify_from_reference(r_a);
	identify_from_reference(r_b);
	identify_from_reference(r_c);
	return (0);
}
