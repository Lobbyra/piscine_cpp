/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:52:29 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/21 15:12:40 by jecaudal         ###   ########.fr       */
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
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
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

unsigned int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}	

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade wanted is too low, grade 150 is the minimum.");
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade wanted is too high, grade 1 is the maximum.");
}

void	Bureaucrat::promote(void)
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		_grade--;
		std::cout << _name << " is successfully promoted !" << std::endl;
	}
}

void	Bureaucrat::demote(void)
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::cout << _name << " is saddly promoted !" << std::endl;
		_grade++;
	}
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	(void)src;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (o);
}
