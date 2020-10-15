/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manual.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:12:52 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/14 17:43:49 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANUAL_HPP
# define MANUAL_HPP

# include <iostream>
# include <sstream>

class	Manual
{
public:

	Manual(void);
	Manual(int c_age_adapted);
	Manual(Manual const &src);
	Manual &operator=(Manual const &src);
	~Manual();

	int		getAge_adapted(void)
	{
		return (this->age_adapted);
	}
	virtual void describe(void) const
	{
		std::cout << "I'm a blank manual. For " << age_adapted << std::endl;
	}

protected:

	int age_adapted;

};

class	MathManual : public Manual
{
public:

	MathManual(void);
	MathManual(int age_adapted, int width, int height, int lenght);
	MathManual(MathManual const &src);
	MathManual &operator=(MathManual const &src);
	virtual ~MathManual();

	virtual void describe(void) const
	{
		std::cout << "I'm a math manual. For " << age_adapted << std::endl;
	}
	std::string getDimension(void)
	{
		std::stringstream ss;

		ss << width << "*" << width << "*" << width;
		return (ss.str());
	}

private:

	int width;
	int height;
	int lenght;

};

std::ostream	&operator<<(std::ostream &o, Manual const &i);

Manual::Manual(int c_age_adapted) : age_adapted(c_age_adapted)
{
	return ;
}

Manual::~Manual()
{
	return ;
}

MathManual::MathManual(int c_age_adapted, int width, int height, int lenght)
: Manual(c_age_adapted), width(width), height(height), lenght(lenght)
{
	return ;
}

MathManual::~MathManual()
{
	return ;
}

#endif
