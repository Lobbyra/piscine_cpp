/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 12:01:50 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 12:20:38 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_HPP
# define Base_HPP

# include <iostream>

class	Base
{
public:
	virtual ~Base();
};

class A : public Base {} ;
class B : public Base {} ;
class C : public Base {} ;

void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif
