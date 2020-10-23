/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:34:39 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 17:47:50 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class	PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm();

	virtual void		execute(Bureaucrat const &executor) const;
	std::string	const	getTarget(void) const;
	Form const			&getForm(void) const;

private:

	PresidentialPardonForm(void);
	std::string _target;

};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &i);

#endif
