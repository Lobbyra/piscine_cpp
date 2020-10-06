/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:05:53 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 10:00:43 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Pony
{
public:
	int			age;
	std::string	name;
	std::string	color;
	int			weight;
	bool		is_in_heap;
	std::string	localisation;

	Pony(int c_age, std::string c_color, int c_weight, std::string c_loc, std::string name);
	~Pony(void);
	void	jump(void);
	void	change_color(std::string color);
	void	presentation(void);
	void	travel(std::string destination);

};
