/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:28:32 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/19 17:57:21 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <sstream>

class	Character : public ICharacter
{
public:

	Character(void);
	Character(Character const &src);
	Character(std::string const &src);
	Character &operator=(Character const &src);
	virtual ~Character();

	AMateria			*getMateria(int const i) const;
	std::string const	getMaterias(void) const;
	std::string const	&getName(void) const;
	void				setName(std::string const &name);
	int 				getCount(void) const;

	virtual void	equip(AMateria *m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter &target);

private:

	std::string _name;
	AMateria	**_materias;
	int			_count_materias;

};

std::ostream	&operator<<(std::ostream &o, Character const &i);


#endif
