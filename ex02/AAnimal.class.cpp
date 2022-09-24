/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:43:24 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 19:43:16 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

/* Constructors and destructor */

AAnimal::AAnimal( void ) : type("AAnimal")
{
	std::cout << "AAnimal`s default constructor called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & inst ) : type(inst.type)
{
	std::cout << "AAnimal`s copy constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal`s destructor called" << std::endl;
}

/* Assignement operator`s overloading */

AAnimal	& AAnimal::operator=( AAnimal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

/* Getters and setters */

std::string	AAnimal::getType( void ) const
{
	return this->type;
}

void	AAnimal::setType( std::string const & new_type)
{
	this->type = new_type;
}
