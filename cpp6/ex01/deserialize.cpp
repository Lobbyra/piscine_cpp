/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:36:10 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 11:54:44 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

Data	*deserialize(void *raw)
{
	char	temp[9];
	Data	*data = new Data;
	char	*raw_ptr = static_cast<char*>(raw);

	temp[8] = '\0';
	data->s1 = static_cast<char*>(memcpy(temp, static_cast<char*>(raw_ptr), 8));
	data->n = *(reinterpret_cast<int*>(raw_ptr + 8));
	data->s2 = static_cast<char*>(memcpy(temp, static_cast<char*>(raw_ptr + 12), 8));
	delete raw_ptr;
	return (data);
}
