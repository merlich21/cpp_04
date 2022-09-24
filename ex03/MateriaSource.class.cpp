/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:03:55 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 23:15:22 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource( void )
{
	for (int k = 0; k < TEMPL; k++)
	{
		this->_templates[k] = NULL;
	}
	std::cout << "MateriaSource`s default constructor called" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & inst )
{
	*this = inst;
	std::cout << "MateriaSource`s copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	for (int k = 0; k < TEMPL; k++)
	{
		if (this->_templates[k])
			delete this->_templates[k];
	}
	std::cout << "MateriaSource`s destructor called" << std::endl;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs )
{
	AMateria	*tmp = NULL;

	for (int j = 0; j < TEMPL; j++)
	{
		if (rhs._templates[j])
		{
			tmp = rhs._templates[j]->clone();
			this->_templates[j] = tmp;
		}
	}
	return *this;
}

void		MateriaSource::learnMateria( AMateria * m )
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_templates[i])
		{
			this->_templates[i] = m->clone();
			break ;
		}
	}
}

AMateria	* MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < TEMPL; i++)
	{
		if (this->_templates[i])
		{
			if (!this->_templates[i]->getType().compare( type ))
				return this->_templates[i]->clone();
		}
	}
	return 0;
}
