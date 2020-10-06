/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:17:56 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 04:59:01 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.hpp"

static void	search_exec(Contact list[8], int index)
{
	int		i = 0;
	char	buf[256];

	std::cout << "\033[2J\033[1;1H";
	while (i < index)
	{
		if (i == 0)
		{
			std::cout << "|   " << "index" << "  " << "|";
    		std::cout << "first_name" << "|";
    		std::cout << " last_name" << "|";
		    std::cout << "   " << "login" << "  |" << std::endl;
		}
		list[i].print_contact(i);
		i++;
	}
	std::cout << "Quel contact souhaitez-vous afficher ?" << std::endl << "> ";
	std::cin >> buf;
	if (std::strlen(buf) == 1 && buf[0] - '0' >= 0 && buf[0] - '0' <= index)
		list[buf[0] - '0'].print_all();
	else if (std::strlen(buf) == 1)
		std::cerr << "Index de contact non reconnus." << std::endl;
	else
		std::cerr << "L'index doit etre un chiffre entre 0 et 7 compris." << std::endl;
}

void	print_welcome(void)
{
	std::cout << "Bienvenue dans l'annuaire nul." << std::endl;
	std::cout << "Tu peux y stocker seulement huit contacts." << std::endl;
	std::cout << "Il y a trois commandes a dispositions :" << std::endl;
	std::cout << "\tADD : Ajouter un contact." << std::endl;
	std::cout << "\tSEARCH : Afficher une contact." << std::endl;
	std::cout << "\tEXIT : Sortir de l'annuaire." << std::endl;
}

int		main()
{
	Contact		list[8];
	char		buf[256];
	int			index = 0;
	std::string add("ADD");
	std::string exit("EXIT");
	std::string search("SEARCH");

	print_welcome();
	while (1)
	{
		std::cout << "[ADD | SEARCH | EXIT]> ";
		std::cin >> buf;
		if (add.compare(buf) == 0)
		{
			if (index == 8)
				std::cerr << "Vous ne pouvez pas avoir plus de 8 contacts dans l'annuaire." << std::endl;
			else
				list[index++].add_contact();
		}
		else if (exit.compare(buf) == 0)
			break ;
		else if (search.compare(buf) == 0)
			search_exec(list, index);
		else
			std::cerr << "Commande non reconnu donc ignoree." << std::endl;
	}
	std::cout << "Goodbye :(" << std::endl;
	return (0);
}
