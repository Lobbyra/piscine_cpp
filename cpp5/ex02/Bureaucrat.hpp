/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:49:28 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 14:40:16 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &src);
	virtual ~Bureaucrat();

	int				getGrade(void) const;
	std::string		getName(void) const;

	void			promote(void);
	void			demote(void);

	void			signForm(Form &form);
	void			executeForm(Form const &form);

private:

	Bureaucrat(void);
	std::string const	_name;
	int					_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
