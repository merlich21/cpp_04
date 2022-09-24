/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:54:25 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 22:48:56 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

/* Constructors and destructor */

Cat::Cat( void )
{
	std::cout << "Cat`s default constructor called" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat( Cat const & inst ) : AAnimal()
{
	std::cout << "Cat`s copy constructor called" << std::endl;
    this->setType(inst.type);
	this->_brain = new Brain(*(inst._brain));
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat`s destructor called" << std::endl;
}

/* Assignement operator`s overloading */

Cat	& Cat::operator=( Cat const & rhs )
{
	this->type = rhs.type;
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
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

void	Cat::setBrain( Brain * br)
{
	this->_brain = br;
}

Brain *	Cat::getBrain( void ) const
{
	return this->_brain;
}

/* Member function */

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
}
