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
	Bureaucrat	gui("gui", 50);
	Bureaucrat	delphine("delphine", 5);
	Form		cdi_peintre("cdi_peintre", 10, 5);
	Form		cdd_voiturier("cdd_voiturier", 100, 10);

	gui.signForm(cdi_peintre);
	gui.signForm(cdd_voiturier);
	std::cout << std::endl;

	std::cout << cdi_peintre;
	std::cout << cdd_voiturier;
	std::cout << std::endl;

	delphine.signForm(cdi_peintre);
	delphine.signForm(cdd_voiturier);
	std::cout << std::endl;
	
	std::cout << cdi_peintre;
	std::cout << cdd_voiturier;
	std::cout << std::endl;

	std::cout << gui;
	std::cout << delphine;

	return (0);
}
