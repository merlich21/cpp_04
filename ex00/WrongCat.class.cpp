/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:54:25 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 19:43:24 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

/* Constructors and destructor */

WrongCat::WrongCat( void )
{
    this->setType("WrongCat");
	std::cout << "WrongCat`s default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & inst ) : WrongAnimal()
{
    this->setType(inst.type);
	std::cout << "WrongCat`s copy constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat`s destructor called" << std::endl;
}

/* Assignement operator`s overloading */

WrongCat	& WrongCat::operator=( WrongCat const & rhs )
{
	this->type = rhs.type;
	return *this;
}

/* Getters and setters */

std::string	WrongCat::getType( void ) const
{
	return this->type;
}

void		WrongCat::setType( std::string const & new_type)
{
	this->type = new_type;
}

/* Member function */

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
}
