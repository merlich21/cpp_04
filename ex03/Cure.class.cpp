/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:39:41 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 21:28:08 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure( void )
{
	this->setType( "cure" );
	std::cout << "Cure`s default constructor called" << std::endl;
}

Cure::Cure( Cure const & inst )
{
	// this->setType( inst.getType() );
	*this = inst;
	std::cout << "Cure`s copy constructor called" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "Cure`s destructor called" << std::endl;
}

Cure	& Cure::operator=( Cure const & rhs )
{
	this->setType( rhs.getType() );
	return *this;
}

AMateria	* Cure::clone( void ) const
{
	AMateria	*inst = new Cure();

	return	inst;
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "`s wounds *" << std::endl;
}
