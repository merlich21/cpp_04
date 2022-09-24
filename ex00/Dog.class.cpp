/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:07:16 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 19:43:27 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

/* Constructors and destructor */

Dog::Dog( void )
{
    this->setType("Dog");
	std::cout << "Dog`s default constructor called" << std::endl;
}

Dog::Dog( Dog const & inst ) : Animal()
{
    this->setType(inst.type);
	std::cout << "Dog`s copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog`s destructor called" << std::endl;
}

/* Assignement operator`s overloading */

Dog	& Dog::operator=( Dog const & rhs )
{
	this->type = rhs.type;
	return *this;
}

/* Getters and setters */

std::string	Dog::getType( void ) const
{
	return this->type;
}

void		Dog::setType( std::string const & new_type)
{
	this->type = new_type;
}

/* Member function */

void	Dog::makeSound( void ) const
{
	std::cout << "Bark!" << std::endl;
}
