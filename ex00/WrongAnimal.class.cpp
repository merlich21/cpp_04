/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:43:24 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 20:03:06 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

/* Constructors and destructor */

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
	std::cout << "WrongAnimal`s default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & inst ) : type(inst.type)
{
	std::cout << "WrongAnimal`s copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal`s destructor called" << std::endl;
}

/* Assignement operator`s overloading */

WrongAnimal	& WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

/* Member function */

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Hi! I am an WrongAnimal!" << std::endl;
}

/* Getters and setters */

std::string	WrongAnimal::getType( void ) const
{
	return this->type;
}

void	WrongAnimal::setType( std::string const & new_type)
{
	this->type = new_type;
}
