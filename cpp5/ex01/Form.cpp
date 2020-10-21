/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:19:14 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/21 17:38:27 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Form::Form(void)
: _name("default"), _is_signed(false), _grade_needed_sign(-1), _grade_needed_exec(-1)
{
	return ;
}

Form::Form(std::string name, int grade_needed_sign, int grade_needed_exec)
: _name(name), _is_signed(false), _grade_needed_sign(grade_needed_sign),
_grade_needed_exec(grade_needed_exec) 
{
	return ;
}

Form::Form(Form const &src)
: _name(src.getName()), _is_signed(src.getIsSigned()),
_grade_needed_sign(src.getGradeNeededSign()), _grade_needed_exec(src.getGradeNeededExec())
{
	*this = src;
}

Form::~Form()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

std::string const	Form::getName(void) const
{
	return (_name);
}

bool				Form::getIsSigned(void) const
{
	return (_is_signed);
}

int					Form::getGradeNeededSign(void) const
{
	return (_grade_needed_sign);
}

int					Form::getGradeNeededExec(void) const
{
	return (_grade_needed_exec);
}

void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() < _grade_needed_sign)
		_is_signed = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Form	&Form::operator=(Form const &src)
{
	_is_signed = src.getIsSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	if (i.getIsSigned() == true)
	{
		o << \
		"Form " << i.getName() << " is signed."
		<< std::endl;
	}
	else
	{
		o << \
		"Form " << i.getName() << " is not signed."
		<< std::endl;
	}
	o << \
	"It has sign level = " << i.getGradeNeededSign() << " & "
	"exec level = " << i.getGradeNeededExec()
	<< std::endl;
	return (o);
}
