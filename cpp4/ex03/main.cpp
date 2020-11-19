/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:34:30 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/10 14:55:13 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int		main(void)
{
	std::cout << "--------------" << std::endl;
	std::cout << "Tests du sujet" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	std::cout << "------------------" << std::endl;
	std::cout << "Tests additionnels" << std::endl;
	// --------------------------------------------------------------------------
	IMateriaSource	*source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	ICharacter	*moi = new Character("moi");

	std::cout << *((Character*)moi) << std::endl;
	AMateria	*tmp1;
	AMateria	*tmp2;
	AMateria	*tmp3;
	AMateria	*tmp4;
	AMateria	*tmp5;
	AMateria	*tmp6;

	tmp1 = source->createMateria("cure");
	moi->equip(tmp1);
	tmp2 = source->createMateria("ice");
	moi->equip(tmp2);
	tmp3 = source->createMateria("cure");
	moi->equip(tmp3);
	tmp4 = source->createMateria("AAAAAAA"); // Test d'erreur sur un type de materia non existant
	moi->equip(tmp4);
	tmp5 = source->createMateria("cure");
	moi->equip(tmp5);
	tmp6 = source->createMateria("cure"); // Test d'erreur sur un materia en trop sur 4
	moi->equip(tmp6);
	std::cout << *((Character*)moi) << std::endl;
	// --------------------------------------------------------------------------

	// --------------------------------------------------------------------------
	ICharacter	*jean = new Character("jean");

	moi->use(0, *jean); // Test d'augmentation de l'xp sur un character vide
	moi->use(1, *jean); // Test d'augmentation de l'xp sur un character vide

	std::cout << *((Character*)moi) << std::endl; // Affichage de moi pour voir l'augmentation de l'xp
	ICharacter	*jerem = new Character(*(Character*)moi); // Test de constructeur par copie
	// --------------------------------------------------------------------------

	// --------------------------------------------------------------------------
	((Character*)jerem)->setName("jerem"); // Test du changement de nom
	std::cout << *((Character*)jerem); // Affichage de jerem pour voir si le nom a changé
	// --------------------------------------------------------------------------

	// --------------------------------------------------------------------------
	moi->unequip(0); // Unequip pour voir si la materia se supprime dans jerem
	moi->unequip(1);
	moi->unequip(2);
	moi->unequip(3);

	jerem->use(2, *jean); // Test des materia de jerem pour valider leurs existence
	jerem->use(3, *jean);
	jerem->use(3, *jean);
	jerem->use(3, *jean);
	jerem->use(3, *jean);
	jerem->use(3, *jean);
	std::cout << std::endl;

	std::cout << *((Character*)moi) << std::endl;
	std::cout << *((Character*)jerem) << std::endl;
	// --------------------------------------------------------------------------

	// --------------------------------------------------------------------------
	ICharacter	*copy_jerem = new Character(); // Test de l'assignation par copie

	*(Character*)copy_jerem = *(Character*)jerem;
	((Character*)copy_jerem)->setName("copy_jerem");

	std::cout << *((Character*)copy_jerem) << std::endl;
	// --------------------------------------------------------------------------

	delete jean;
	delete moi;
	delete source;
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
