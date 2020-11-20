/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:55:22 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/11 12:08:17 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Intern	thomas;
	Form	*SCF;
	Form	*RRF;
	Form	*PPF;
	Form	*FireInter;

	SCF = thomas.makeForm("schrubbery creation", "maison");
	std::cout << std::endl;
	std::cout << (ShrubberyCreationForm&)*SCF;

	RRF = thomas.makeForm("robotomy request", "LeChatDuVoisin");
	std::cout << std::endl;
	std::cout << (RobotomyRequestForm&)*RRF;

	PPF = thomas.makeForm("presidential pardon", "rocketman");
	std::cout << std::endl;
	std::cout << (PresidentialPardonForm&)*PPF;

	FireInter = thomas.makeForm("fire intern", "thomas");
	std::cout << std::endl;

	Bureaucrat	gui("gui", 50);
	Bureaucrat	delphine("delphine", 7);
	Bureaucrat	edouard_baer("edouard_baer", 1);

	if (FireInter)
	{
		// Not executed if Creation failed.
		// which is expected as good result.
		gui.signForm(*FireInter);
		gui.executeForm(*FireInter);
		std::cout << std::endl;
	}

	gui.signForm(*SCF);
	gui.executeForm(*SCF);
	std::cout << std::endl;

	gui.signForm(*RRF);
	gui.executeForm(*RRF);
	delphine.executeForm(*RRF);
	std::cout << std::endl;

	gui.signForm(*PPF);
	delphine.signForm(*PPF);
	delphine.executeForm(*PPF);
	edouard_baer.executeForm(*PPF);

	delete SCF;
	delete RRF;
	delete PPF;

	return (0);
}
