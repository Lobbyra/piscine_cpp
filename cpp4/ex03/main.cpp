/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:34:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 17:47:54 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int		main(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*moi = new Character("moi");

	std::cout << *((Character*)moi) << std::endl;
	AMateria	*tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("AAAAAAA");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	std::cout << *((Character*)moi) << std::endl;

	ICharacter	*bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << *((Character*)moi) << std::endl;
	ICharacter	*jerem = new Character(*(Character*)moi);

	std::cout << *((Character*)jerem) << std::endl;

	moi->unequip(0);
	moi->unequip(1);
	moi->unequip(2);
	moi->unequip(3);

	jerem->use(0, *bob);
	jerem->use(1, *bob);
	std::cout << *((Character*)moi) << std::endl;
	std::cout << *((Character*)jerem) << std::endl;

	delete bob;
	delete moi;
	delete src;
	delete jerem;
	delete tmp;
	return (0);
}
