/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:39:41 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 22:41:47 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria( void )
{
	std::cout << "AMateria`s default constructor called" << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << "AMateria`s custom constructor called" << std::endl;
}

AMateria::AMateria( AMateria const & inst ) : _type(inst._type)
{
	std::cout << "AMateria`s copy constructor called" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria`s destructor called" << std::endl;
}


AMateria	& AMateria::operator=( AMateria const & rhs )
{
	this->_type = rhs._type;
	return *this;
}


std::string const	& AMateria::getType( void ) const
{
	return this->_type;
}

void	AMateria::setType( std::string const & value)
{
	this->_type = value;
}

void	AMateria::use( ICharacter& target )
{
	std::cout << "AMateria`s 'USE' function called on " << target.getName() << std::endl;
}

