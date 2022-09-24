/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:27:08 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 22:12:26 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

#include "ICharacter.class.hpp"

#define SLOTS	4

class	Character : public ICharacter
{
	public:

		Character( void );
		Character( std::string const & name );
		Character( Character const & inst );
		virtual	~Character( void );

		Character &	operator=( Character const & rhs );

		virtual std::string const	& getName( void ) const;
		virtual	void	setName( std::string const & name );

		virtual void	equip( AMateria* m );
		virtual void	unequip( int idx );
		virtual void	use( int idx, ICharacter& target );

	private:

		std::string		_name;
		AMateria		*_inventory[SLOTS];

};

#endif
