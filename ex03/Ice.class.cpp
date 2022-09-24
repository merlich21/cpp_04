/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:39:41 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 21:27:52 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice( void )
{
	this->setType( "ice" );
	std::cout << "Ice`s default constructor called" << std::endl;
}

Ice::Ice( Ice const & inst )
{
	// this->setType( inst.getType() );
	*this = inst;
	std::cout << "Ice`s copy constructor called" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "Ice`s destructor called" << std::endl;
}

Ice	& Ice::operator=( Ice const & rhs )
{
	this->setType( rhs.getType() );
	return *this;
}

AMateria	* Ice::clone( void ) const
{
	AMateria	*inst = new Ice();

	return	inst;
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
