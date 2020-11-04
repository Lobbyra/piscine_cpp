/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtException.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:57:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/03 16:48:13 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXCEPTION_HPP
# define FT_EXCEPTION_HPP

# include <iostream>
# include <exception>

class	FtException : public std::exception
{
public:

	FtException(void);
	FtException(FtException const &src);
	FtException(std::string const src);
	FtException &operator=(FtException const &src);
	virtual ~FtException();
	const char *what() const throw();

private:
	std::string const _s;

};

#endif
