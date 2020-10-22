/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 12:32:35 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 16:26:40 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class	RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm();

	Form const			&getForm(void) const;
	std::string const	getTarget(void) const;
	virtual void		execute(Bureaucrat const &executor) const;

private:
	std::string _target;

};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &i);

#endif
