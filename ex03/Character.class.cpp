/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:27:05 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 23:04:11 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character( void ) : _name("default")
{
	for (int k = 0; k < SLOTS; k++)
	{
		_inventory[k] = NULL;
	}
	std::cout << "Character`s default constructor called" << std::endl;
}

Character::Character( std::string const & name ) : _name(name)
{
	for (int k = 0; k < SLOTS; k++)
	{
		_inventory[k] = NULL;
	}
	std::cout << "Character`s custom constructor called" << std::endl;
}

Character::Character( Character const & inst )
{
	*this = inst;
	std::cout << "Character`s copy constructor called" << std::endl;
}

Character::~Character( void )
{
	for (int k = 0; k < SLOTS; k++)
	{
		if (this->_inventory[k])
			delete this->_inventory[k];
	}
	std::cout << "Character`s destructor called" << std::endl;
}

Character &	Character::operator=( Character const & rhs )
{
	AMateria	*tmp = NULL;

	this->_name = rhs._name;
	
	for (int j = 0; j < SLOTS; j++)
	{
		if (rhs._inventory[j])
		{
			tmp = rhs._inventory[j]->clone();
			this->_inventory[j] = tmp;
		}
	}
	return *this;
}

std::string const	& Character::getName() const
{
	return this->_name;
}

void	Character::setName( std::string const & name )
{
	this->_name = name;
}

void	Character::equip( AMateria * m )
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip( int idx )
{
	if (idx >= 0 && idx < SLOTS)
	{
		if (this->_inventory[idx])
			this->_inventory[idx] = NULL;
	}
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx > 0 && idx < SLOTS)
	{
		if (this->_inventory[idx])
			(*this->_inventory[idx]).use( target );
	}
}
