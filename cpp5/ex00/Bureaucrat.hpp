/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:49:28 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/21 15:06:06 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class	Bureaucrat
{
public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &src);
	virtual ~Bureaucrat();

	unsigned int	getGrade(void) const;
	std::string		getName(void) const;

	void			promote(void);
	void			demote(void);

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

private:

	Bureaucrat(void);
	std::string const	_name;
	int					_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
