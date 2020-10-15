/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:12:56 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/14 17:40:47 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "manual.hpp"

void	describe(Manual const &man)
{
	man.describe();
}

int		main()
{
	Manual		blank(14);
	MathManual	do_the_math(18, 5, 10, 25);
	Manual*		gold_math = new MathManual(3, 5, 5, 5);

	describe(blank);
	describe(do_the_math);
	describe(*gold_math);

	delete (gold_math);
	return (0);
}
