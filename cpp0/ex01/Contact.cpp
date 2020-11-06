/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:19:04 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/06 14:48:38 by jecaudal         ###   ########.fr       */
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
	std::cout << this->first_name << " correctement ajoute dans l'annuire." << std::endl;
	std::cin.ignore();
}

void	Contact::print_all(void)
{
	std::cout << "first name : ";
	std::cout << this->first_name << std::endl;
	std::cout << "last name : ";
	std::cout << this->last_name << std::endl;
	std::cout << "nickname : ";
	std::cout << this->nickname << std::endl;
	std::cout << "login : ";
	std::cout << this->login << std::endl;
	std::cout << "postal address : ";
	std::cout << this->postal_address << std::endl;
	std::cout << "email address : ";
	std::cout << this->email_address << std::endl;
	std::cout << "phone number : ";
	std::cout << this->phone_number << std::endl;
	std::cout << "birthday date : ";
	std::cout << this->birthday_date << std::endl;
	std::cout << "favorite meal : ";
	std::cout << this->favorite_meal << std::endl;
	std::cout << "underware color : ";
	std::cout << this->underware_color << std::endl;
	std::cout << "darkest secret : ";
	std::cout << this->darkest_secret << std::endl;
}
