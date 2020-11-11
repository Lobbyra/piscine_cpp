/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 12:13:23 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/11 15:38:42 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int		main()
{
	//----------[Identify test part]--------
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
	std::cout << "-------------------" << std::endl;
	//------------------------------------

	//-------[Generate function part]--------
	Base	*rand_base1 = generate();
	Base	*rand_base2 = generate();
	Base	*rand_base3 = generate();
	Base	*rand_base4 = generate();
	identify_from_pointer(rand_base1);
	identify_from_pointer(rand_base2);
	identify_from_pointer(rand_base3);
	identify_from_pointer(rand_base4);

	delete rand_base1;
	delete rand_base2;
	delete rand_base3;
	delete rand_base4;
	//---------------------------------------
	return (0);
}
