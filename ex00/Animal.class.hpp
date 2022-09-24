/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:27:56 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 19:50:42 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class	Animal
{
	public:

	/* Constructors and destructor */

		Animal( void );
		Animal( Animal const & inst );
		virtual ~Animal( void );

	/* Assignement operator`s overloading */

		Animal	& operator=( Animal const & rhs );

	/* Member function */

		virtual void	makeSound( void ) const;

	/* Getters and setters */

		std::string	getType( void ) const;
		void		setType( std::string const & new_type);

	protected:

		std::string	type;
	
	private:


};

#endif
