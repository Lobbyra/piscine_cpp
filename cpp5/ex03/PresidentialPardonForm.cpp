/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:36:03 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/23 15:22:02 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
PresidentialPardonForm::PresidentialPardonForm(void)
: Form("PresidentialPardonForm", 25, 5), _target("default")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
: Form(src), _target(src.getTarget())
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

std::string	const	PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}

Form const			&PresidentialPardonForm::getForm(void) const
{
	return (*(Form*)this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
/*
**	/// OPERATOR OVERLOADS PART \\
*/
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	_target = src.getTarget();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &i)
{
	o << \
	"[PresidentialPardonForm]" << std::endl <<		\
	"_target = " << i.getTarget() << std::endl <<	\
	i.getForm() << std::endl;
	return (o);
}

__attribute__((destructor)) static void leak() { getchar(); }
