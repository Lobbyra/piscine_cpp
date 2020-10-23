/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:17:15 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/23 11:56:07 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

typedef struct s_string_form
{
	std::string		str_form_type;
	Form			*(*fptr_form)(std::string target);
}		t_string_form;

class	Intern
{
public:

	Intern(void);
	Intern(Intern const &src);
	Intern &operator=(Intern const &src);
	virtual ~Intern();

	Form	*makeForm(std::string const form_type, std::string const target) const;

};

#endif
