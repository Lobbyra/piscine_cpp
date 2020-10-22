/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:52:29 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 16:34:45 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
Bureaucrat::Bureaucrat(void) : _name("default"), _grade(-1)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHighException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade())
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

int			Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}	

void	Bureaucrat::promote(void)
{
	if (_grade == 1)
		throw Form::GradeTooHighException();
	else
	{
		_grade--;
		std::cout << _name << " is successfully promoted !" << std::endl;
	}
}

void	Bureaucrat::demote(void)
{
	if (_grade == 150)
		throw Form::GradeTooLowException();
	else
	{
		std::cout << _name << " is saddly demoted !" << std::endl;
		_grade++;
	}
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cerr << \
		_name << " signs " << form.getName() \
		<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << \
		_name << " cant sign " << form.getName() << " because " << e.what()	\
		<< std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " could not execute form : " << e.what() << std::endl;
	}
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	_grade = src.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (o);
}
