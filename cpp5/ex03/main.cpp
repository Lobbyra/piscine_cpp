/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:55:22 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/23 12:30:42 by jecaudal         ###   ########.fr       */
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
	std::cout << (ShrubberyCreationForm&)*SCF << std::endl;
	RRF = thomas.makeForm("robotomy request", "LeChatDuVoisin");
	std::cout << (RobotomyRequestForm&)*RRF << std::endl;
	PPF = thomas.makeForm("presidential pardon", "sorry rocketman");
	std::cout << (PresidentialPardonForm&)*PPF << std::endl;
	FireInter = thomas.makeForm("fire intern", "thomas");
	delete SCF;
	delete RRF;
	delete PPF;
	return (0);
}
