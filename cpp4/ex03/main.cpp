/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:34:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/20 15:14:56 by jecaudal         ###   ########.fr       */
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
	AMateria	*tmp1;
	AMateria	*tmp2;
	AMateria	*tmp3;
	AMateria	*tmp4;
	AMateria	*tmp5;
	AMateria	*tmp6;
	tmp1 = src->createMateria("cure");
	moi->equip(tmp1);
	tmp2 = src->createMateria("ice");
	moi->equip(tmp2);
	tmp3 = src->createMateria("cure");
	moi->equip(tmp3);
	tmp4 = src->createMateria("AAAAAAA");
	moi->equip(tmp4);
	tmp5 = src->createMateria("cure");
	moi->equip(tmp5);
	tmp6 = src->createMateria("cure");
	moi->equip(tmp6);
	std::cout << *((Character*)moi) << std::endl;

	ICharacter	*bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << *((Character*)moi) << std::endl;
	ICharacter	*jerem = new Character(*(Character*)moi);

	((Character*)jerem)->setName("jerem");
	std::cout << *((Character*)jerem) << std::endl;

	moi->unequip(0);
	moi->unequip(1);
	moi->unequip(2);
	moi->unequip(3);

	jerem->use(2, *bob);
	jerem->use(3, *bob);
	jerem->use(3, *bob);
	jerem->use(3, *bob);
	jerem->use(3, *bob);
	jerem->use(3, *bob);
	std::cout << *((Character*)moi) << std::endl;
	std::cout << *((Character*)jerem) << std::endl;

	ICharacter	*copy_jerem = new Character();

	*(Character*)copy_jerem = *(Character*)jerem;
	((Character*)copy_jerem)->setName("copy_jerem");

	std::cout << *((Character*)copy_jerem) << std::endl;

	delete bob;
	delete moi;
	delete src;
	delete jerem;
	delete copy_jerem;
	delete tmp1;
	delete tmp2;
	delete tmp3;
	delete tmp4;
	delete tmp5;
	delete tmp6;
	return (0);
}
