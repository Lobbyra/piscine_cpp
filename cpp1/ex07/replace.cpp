/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:13:44 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/07 12:51:55 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		replace(std::string path, std::string s1, std::string s2)
{
	size_t			index;
	std::ofstream	o_file;
	std::ifstream	i_file;
	std::string		buf = "init";

	i_file.open(path);
	if (!(i_file.is_open()))
	{
		std::cerr << "ERROR OPEN : " << path << std::endl;
		return (1);
	}
	o_file.open(path + ".replace");
	if (!(o_file.is_open()))
	{
		std::cerr << "ERROR : Failed to create .replace file" << path << std::endl;
		return (1);
	}
	if (s1.compare("") == 0)
	{
		std::cerr << "ERROR : 1st argument must not be empty !" << std::endl;
		return (1);
	}
	while (std::getline(i_file, buf))
	{
		while ((index = buf.find(s1, 0)) != -1)
		{
			buf.erase(index, s1.length());
			buf.insert(index, s2);
		}
		o_file << buf << std::endl;
	}
	return (0);
}
