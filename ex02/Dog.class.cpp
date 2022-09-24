/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:07:16 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 22:48:56 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

/* Constructors and destructor */

Dog::Dog( void )
{
	std::cout << "Dog`s default constructor called" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::Dog( Dog const & inst ) : AAnimal()
{
	std::cout << "Dog`s copy constructor called" << std::endl;
    this->setType(inst.type);
	this->_brain = new Brain(*(inst._brain));
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Dog`s destructor called" << std::endl;
}

/* Assignement operator`s overloading */

Dog	& Dog::operator=( Dog const & rhs )
{
	this->type = rhs.type;
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
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

void	Dog::setBrain( Brain * br)
{
	this->_brain = br;
}

Brain *	Dog::getBrain( void ) const
{
	return this->_brain;
}

/* Member function */

void	Dog::makeSound( void ) const
{
	std::cout << "Bark!" << std::endl;
}
