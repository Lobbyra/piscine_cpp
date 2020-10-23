/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:19:29 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/23 12:22:44 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

Form	*makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string const form_type, std::string const target) const
{
	int i = 0;
	int n_forms = 3;
	t_string_form arr[] =
	{
		{"schrubbery creation", makeShrubberyCreationForm},
		{"robotomy request", makeRobotomyRequestForm},
		{"presidential pardon", makePresidentialPardonForm}
	};

	while (i < n_forms && arr[i].str_form_type.compare(form_type) != 0)
		i++;
	if (i == 3)
		std::cerr << \
		"Form " << form_type << " wanted not found by the intern." \
		<< std::endl;
	else
	{
		std::cout << "Intern creates " << form_type << std::endl;
		return (arr[i].fptr_form(target));
	}
	return (NULL);
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Intern	&Intern::operator=(Intern const &src)
{
	(void)src;
	return (*this);
}
