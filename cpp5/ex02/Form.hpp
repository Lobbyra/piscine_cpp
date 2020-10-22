/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:19:13 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 16:38:04 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

# include "Bureaucrat.hpp"
# include <fstream>

class	Bureaucrat;

class	Form
{
public:

	Form(void);
	Form(Form const &src);
	Form(std::string name, int _grade_needed_sign, int _grade_needed_exec);
	Form &operator=(Form const &src);
	virtual ~Form();

	std::string const	getName(void) const;
	bool				getIsSigned(void) const;
	int					getGradeNeededSign(void) const;
	int					getGradeNeededExec(void) const;

	void			beSigned(Bureaucrat const &b);
	virtual void	execute(Bureaucrat const &executor) const;

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what(void) const throw();
	};
	
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what(void) const throw();
	};

	class NotSigned : public std::exception
	{
		public:
		virtual const char* what(void) const throw();
	};

protected:
	void	root_signing(bool sign_state);

private:

	std::string const	_name;
	bool				_is_signed;
	int const			_grade_needed_sign;
	int const			_grade_needed_exec;

};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
