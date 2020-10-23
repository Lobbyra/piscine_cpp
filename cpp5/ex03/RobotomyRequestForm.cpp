/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:45:37 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 17:29:26 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

int		rand_seed = 0;

/*
**	/// CONSTRUCTORS & DESTRUCTORS PART \\
*/
RobotomyRequestForm::RobotomyRequestForm(void)
: Form("RobotomyRequestForm", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
: Form(src), _target(src.getTarget())
{
	root_signing(src.getIsSigned());
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

/*
**	/// FUNCTION MEMBER PART \\
*/

std::string const	RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

Form const			&RobotomyRequestForm::getForm(void) const
{
	return (*(Form*)this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	if (rand_seed == 0 || rand_seed != time(NULL))
		srand(time(NULL));
	if (rand() % 2 == 1)
	{
		std::cout << \
		"*bbzzt* *ghrrhrrghrrr* " << _target << " successfully robotomized."
		<< std::endl;
	}
	else
		std::cout << "Robotomization on " << _target << " failed." << std::endl;
}

/*
**	/// OPERATOR OVERLOADS PART \\
*/
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	_target = src.getTarget();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &i)
{
	o << \
	"[RobotomyRequestForm]" << std::endl <<			\
	"_target = " << i.getTarget() << std::endl <<	\
	i.getForm() << std::endl;
	return (o);
}
