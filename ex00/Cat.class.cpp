/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:54:25 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 19:43:24 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

/* Constructors and destructor */

Cat::Cat( void )
{
    this->setType("Cat");
	std::cout << "Cat`s default constructor called" << std::endl;
}

Cat::Cat( Cat const & inst ) : Animal()
{
    this->setType(inst.type);
	std::cout << "Cat`s copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat`s destructor called" << std::endl;
}

/* Assignement operator`s overloading */

Cat	& Cat::operator=( Cat const & rhs )
{
	this->type = rhs.type;
	return *this;
}

/* Getters and setters */

std::string	Cat::getType( void ) const
{
	return this->type;
}

void		Cat::setType( std::string const & new_type)
{
	this->type = new_type;
}

/* Member function */

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
}
