/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:43:24 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 19:43:16 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

/* Constructors and destructor */

Animal::Animal( void ) : type("Animal")
{
	std::cout << "Animal`s default constructor called" << std::endl;
}

Animal::Animal( Animal const & inst ) : type(inst.type)
{
	std::cout << "Animal`s copy constructor called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal`s destructor called" << std::endl;
}

/* Assignement operator`s overloading */

Animal	& Animal::operator=( Animal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

/* Member function */

void	Animal::makeSound( void ) const
{
	std::cout << "Hi! I am an animal!" << std::endl;
}

/* Getters and setters */

std::string	Animal::getType( void ) const
{
	return this->type;
}

void	Animal::setType( std::string const & new_type)
{
	this->type = new_type;
}
