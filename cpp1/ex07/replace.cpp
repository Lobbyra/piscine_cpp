/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:13:44 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/09 08:58:43 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static int	parsing(std::string s1, std::string s2)
{
	if (s1.compare("") == 0 || s2.compare("") == 0)
	{
		std::cerr << "ERROR : argumemts must not be empty !" << std::endl;
		return (1);
	}
	return (0);
}

static std::ofstream	dot_replace_open(std::string path)
{
	std::ofstream	o_file;

	o_file.open(path);
	if (!(o_file.is_open()))
		std::cerr << "ERROR : Failed to create .replace file" << path << std::endl;
	return (o_file);
}

static std::ifstream	src_open(std::string path)
{
	std::ifstream	i_file;

	i_file.open(path);
	if (!(i_file.is_open()))
		std::cerr << "ERROR OPEN : " << path << std::endl;
	return (i_file);
}

int		replace(std::string path, std::string s1, std::string s2)
{
	std::string		buf;
	size_t			index;
	std::ofstream	o_file;
	std::ifstream	i_file;
	bool			replacement_aborted;

	if (parsing(s1, s2) != 0)
		return (1);
	replacement_aborted = (s1 == s2);
	i_file = src_open(path);
	if (i_file.is_open() == false)
		return (1);
	o_file = dot_replace_open(path + ".replace");
	if (o_file.is_open() == false)
	{
		i_file.close();
		return (1);
	}
	while (std::getline(i_file, buf))
	{
		while (!replacement_aborted && (index = buf.find(s1, 0)) != -1)
		{
			buf.erase(index, s1.length());
			buf.insert(index, s2);
		}
		o_file << buf << std::endl;
	}
	return (0);
}
