/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:21:52 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/28 17:11:56 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int		main()
{
	Array <int>arr(5);

	arr[0] = 42;
	arr[1] = 42;
	arr[2] = 42;
	arr[3] = 42;
	arr[4] = 42;
	try
	{
		arr[5] = 42;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: Index not in range of datas amount." << std::endl;
	}
	std::cout << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << std::endl;

	Array <int>arr_cpy;
	Array <int>arr_cpy2(arr);

	arr_cpy = arr;
	std::cout << arr_cpy[0] << ", " << arr_cpy[1] << ", " << arr_cpy[2] << ", " << arr_cpy[3] << ", " << arr_cpy[4] << std::endl;
	std::cout << arr_cpy2[0] << ", " << arr_cpy2[1] << ", " << arr_cpy2[2] << ", " << arr_cpy2[3] << ", " << arr_cpy2[4] << std::endl;

	Array <std::string>str_arr(5);

	str_arr[0] = "Jeremy";
	str_arr[1] = "Jean-Xavier";
	str_arr[2] = "Melchior";
	str_arr[3] = "Marie-So";
	str_arr[4] = "Yann";
	try
	{
		str_arr[5] = 42;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: Index not in range of datas amount." << std::endl;
	}
	std::cout << str_arr[0] << ", " << str_arr[1] << ", " << str_arr[2] << ", " << str_arr[3] << ", " << str_arr[4] << std::endl;

	Array <std::string>str_arr_cpy;
	Array <std::string>str_arr_cpy2(str_arr);

	str_arr_cpy = str_arr;
	std::cout << str_arr_cpy[0] << ", " << str_arr_cpy[1] << ", " << str_arr_cpy[2] << ", " << str_arr_cpy[3] << ", " << str_arr_cpy[4] << std::endl;
	std::cout << str_arr_cpy2[0] << ", " << str_arr_cpy2[1] << ", " << str_arr_cpy2[2] << ", " << str_arr_cpy2[3] << ", " << str_arr_cpy2[4] << std::endl;
	return (0);
}
