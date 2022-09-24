/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:10:54 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 22:40:48 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_HPP
# define ICHARACTER_CLASS_HPP

#include "AMateria.class.hpp"

class	AMateria;

class	ICharacter
{
	public:

		virtual	~ICharacter( void ) {}

		virtual std::string const	& getName( void ) const = 0;

		virtual void	equip( AMateria * m ) = 0;
		virtual void	unequip( int idx ) = 0;
		virtual void	use( int idx, ICharacter& target ) = 0;

};

#endif
