/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:18:59 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/16 09:24:53 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "headers.hpp"

class	Contact
{
public:

	void	print_contact(int index);
	void	add_contact(void);
	void	print_all(void);

	std::string const &getLogin(void) const;
	std::string const &getNickname(void) const;
	std::string const &getLast_name(void) const;
	std::string const &getFirst_name(void) const;
	std::string const &getPhone_number(void) const;
	std::string const &getFavorite_meal(void) const;
	std::string const &getBirthday_date(void) const;
	std::string const &getEmail_address(void) const;
	std::string const &getPostal_address(void) const;
	std::string const &getDarkest_secret(void) const;
	std::string const &getUnderware_color(void) const;

private:
	std::string	login;
	std::string	nickname;
	std::string	last_name;
	std::string	first_name;
	std::string	phone_number;
	std::string	favorite_meal;
	std::string	birthday_date;
	std::string	email_address;
	std::string	postal_address;
	std::string	darkest_secret;
	std::string	underware_color;

};

#endif
