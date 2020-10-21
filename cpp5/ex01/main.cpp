/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:55:22 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/21 17:39:53 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int		main(void)
{
	Form	cdd_voiturier("cdd_voiturier", 100, 10);
	Form	cdi_peintre("cdi_peintre", 10, 5);
	Bureaucrat	gui("gui", 50);
	Bureaucrat	delphine("delphine", 5);

	gui.signForm(cdd_voiturier);
	gui.signForm(cdi_peintre);
	std::cout << std::endl << cdd_voiturier;
	std::cout << cdi_peintre << std::endl;
	delphine.signForm(cdd_voiturier);
	delphine.signForm(cdi_peintre);
	std::cout << std::endl << cdd_voiturier;
	std::cout << cdi_peintre << std::endl;
	std::cout << delphine;
	std::cout << gui;
	return (0);
}
