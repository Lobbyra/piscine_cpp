/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:37:39 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 17:29:34 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
ShrubberyCreationForm::ShrubberyCreationForm(void)
: Form("ShrubberyCreationForm", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
: Form(src), _target(src.getTarget())
{
	root_signing(src.getIsSigned());
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

Form const			&ShrubberyCreationForm::getForm(void) const
{
	return (*(Form*)this);
}

std::string const	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		filename;
	std::ofstream	shrubbery;

	Form::execute(executor);
	filename = _target + "_shrubbery";
	shrubbery.open(filename, std::ios::out | std::ios::trunc);
	if (shrubbery.is_open())
	{
		shrubbery << TREE1 << std::endl;
		shrubbery << TREE2 << std::endl;
		shrubbery << TREE3 << std::endl;
		shrubbery.close();
	}
	else
		std::cerr << "Error : Failed to create the schrubbery." << std::endl;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	_target = src.getTarget();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &i)
{
	o << \
	"[ShrubberyCreationForm]" << std::endl <<			\
	"_target = " << i.getTarget() << std::endl <<	\
	i.getForm() << std::endl;
	return (o);
}
