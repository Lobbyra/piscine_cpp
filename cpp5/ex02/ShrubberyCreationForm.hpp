/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:38 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/22 16:26:46 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm(std::string const &form);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm();

	Form const			&getForm(void) const;
	std::string const	getTarget(void) const;
	virtual void		execute(Bureaucrat const &executor) const;

private:
	ShrubberyCreationForm(void);
	std::string _target;

};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &i);

# define TREE1 \
"      /\\      " << std::endl <<		\
"     /\\*\\     " << std::endl <<		\
"    /\\O\\*\\    " << std::endl <<		\
"   /*/\\/\\/\\   " << std::endl <<		\
"  /\\O\\/\\*\\/\\  " << std::endl <<	\
" /\\*\\/\\*\\/\\/\\ " << std::endl <<	\
"/\\O\\/\\/*/\\/O/\\" << std::endl <<	\
"      ||      " << std::endl <<		\
"      ||      " << std::endl <<		\
"      ||      " << std::endl

# define TREE2 \
"          &&& &&  & &&" << std::endl <<			\
"      && &\\/&\\|& ()|/ @, &&" << std::endl <<		\
"      &\\/(/&/&||/& /_/)_&/_&" << std::endl <<		\
"   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl <<	\
"  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl <<	\
"&&   && & &| &| /& & % ()& /&&" << std::endl <<	\
" ()&_---()&\\&\\|&&-&&--%---()~" << std::endl <<	\
"     &&     \\|||" << std::endl <<		\
"             |||" << std::endl <<		\
"             |||" << std::endl <<		\
"             |||" << std::endl <<		\
"       , -=-~  .-^- _" << std::endl

# define TREE3 \
"    oxoxoo    ooxoo" << std::endl <<		\
"  ooxoxo oo  oxoxooo" << std::endl <<		\
" oooo xxoxoo ooo ooox" << std::endl <<		\
" oxo o oxoxo  xoxxoxo" << std::endl <<		\
"  oxo xooxoooo o ooo" << std::endl <<		\
"    ooo\\oo\\  /o/o" << std::endl <<		\
"        \\  \\/ /" << std::endl <<			\
"         |   /" << std::endl <<	\
"         |  |" << std::endl <<		\
"         | D|" << std::endl <<		\
"         |  |" << std::endl <<		\
"         |  |" << std::endl <<		\
"  ______/____\\____" << std::endl

#endif
