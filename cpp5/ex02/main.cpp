/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:55:22 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 17:51:43 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat	gui("gui", 50);
	Bureaucrat	delphine("delphine", 7);
	Bureaucrat	edouard_baer("edouard_baer", 1);
	ShrubberyCreationForm	maison("maison");
	RobotomyRequestForm		LeChatDuVoisin("Le chat du voisin");
	PresidentialPardonForm	VincentLagaf("VincentLagaf");

	gui.signForm(maison);
	gui.executeForm(maison);
	std::cout << std::endl;
	gui.signForm(LeChatDuVoisin);
	gui.executeForm(LeChatDuVoisin);
	delphine.executeForm(LeChatDuVoisin);
	std::cout << std::endl;
	gui.signForm(VincentLagaf);
	delphine.signForm(VincentLagaf);
	delphine.executeForm(VincentLagaf);
	edouard_baer.executeForm(VincentLagaf);
	std::cout << std::endl;
	std::cout << maison;
	std::cout << LeChatDuVoisin;
	std::cout << VincentLagaf;
	return (0);
}
