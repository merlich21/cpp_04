/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:16:32 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 21:47:34 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain( void ) : _count(0)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( Brain const & inst ) : _count(inst._count)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = inst.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	this->_count = rhs._count;
	for (int i = 0; i < _count; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

void			Brain::addIdeas( std::string new_idea )
{
	if (_count > 99)
		_count = 0;
	this->ideas[_count] = new_idea;
	this->_count++;
}

void			Brain::setIdeas( std::string new_idea, unsigned int index )
{
	if (index < 100)
		this->ideas[index] = new_idea;
	else
		std::cout << "Index is out of range (0 - 100)" << std::endl;
}

std::string		Brain::getIdeas( unsigned int index ) const
{
	if (index < 100)
		return this->ideas[index];
	else
	{
		std::cout << "Index is out of range (0 - 100)" << std::endl;
		return this->ideas[99];
	}
}
