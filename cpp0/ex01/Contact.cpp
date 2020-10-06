/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:19:04 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 04:31:45 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.hpp"

void	Contact::print_contact(int index)
{
	char buf[11];
	std::cout << "|" << std::setprecision(10) << std::setfill(' ') << std::setw(10) << index << "|";
	if (std::strlen(this->first_name) >= 10)
	{
		std::strncpy(buf, this->first_name, 9);
		buf[10] = '\0';
		buf[9] = '.';
		std::cout << buf << "|";
	}
	else
    	std::cout << std::setprecision(10) << std::setfill(' ') << std::setw(10) << this->first_name << "|";
	if (std::strlen(this->last_name) >= 10)
	{
		std::strncpy(buf, this->last_name, 9);
		buf[10] = '\0';
		buf[9] = '.';
		std::cout << buf << "|";
	}
	else
    	std::cout << std::setprecision(10) << std::setfill(' ') << std::setw(10) << this->last_name << "|";
	if (std::strlen(this->login) >= 10)
	{
		std::strncpy(buf, this->login, 9);
		buf[10] = '\0';
		buf[9] = '.';
		std::cout << buf << "|" << std::endl;
	}
	else
    	std::cout << std::setprecision(10) << std::setfill(' ') << std::setw(10) << this->login << "|" << std::endl;
}

void	Contact::add_contact(void)
{
	std::cout << "First name :" << std::endl << "> ";
	std::cin >> this->first_name;
	std::cout << "Last name :" << std::endl << "> ";
	std::cin >> this->last_name;
	std::cout << "Nickname :" << std::endl << "> ";
	std::cin >> this->nickname;
	std::cout << "Login :" << std::endl << "> ";
	std::cin >> this->login;
	std::cout << "Postal address :" << std::endl << "> ";
	std::cin >> this->postal_address;
	std::cout << "Email address :" << std::endl << "> ";
	std::cin >> this->email_address;
	std::cout << "Phone number :" << std::endl << "> ";
	std::cin >> this->phone_number;
	std::cout << "Birthday date :" << std::endl << "> ";
	std::cin >> this->birthday_date;
	std::cout << "Favorite meal :" << std::endl << "> ";
	std::cin >> this->favorite_meal;
	std::cout << "Underwear color :" << std::endl << "> ";
	std::cin >> this->underware_color;
	std::cout << "Darkest secret :" << std::endl << "> ";
	std::cin >> this->darkest_secret;
	printf("%s correctement ajoute dans l'annuaire.\n", this->first_name);
}

void	Contact::print_all(void)
{
	printf("first name : [%s]\n", this->first_name);
	printf("last name : [%s]\n", this->last_name);
	printf("nickname name : [%s]\n", this->nickname);
	printf("login : [%s]\n", this->login);
	printf("postal address : [%s]\n", this->postal_address);
	printf("email address : [%s]\n", this->email_address);
	printf("phone number : [%s]\n", this->phone_number);
	printf("birthday date : [%s]\n", this->birthday_date);
	printf("favorite meal : [%s]\n", this->favorite_meal);
	printf("underware color : [%s]\n", this->underware_color);
	printf("darkest secret : [%s]\n", this->darkest_secret);
}
