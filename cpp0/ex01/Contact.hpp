/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:18:59 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/06 03:27:11 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "headers.hpp"

class	Contact
{
public:

	char	login[256];
	char	nickname[256];
	char	last_name[256];
	char	first_name[256];
	char	phone_number[256];
	char	favorite_meal[256];
	char	birthday_date[256];
	char	email_address[256];
	char	postal_address[256];
	char	darkest_secret[256];
	char	underware_color[256];

	void	print_contact(int index);
	void	add_contact(void);
	void	print_all(void);
};

#endif
