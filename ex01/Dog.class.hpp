/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:06:40 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 21:38:59 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class	Dog : public Animal
{
	public:

	/* Constructors and destructor */

		Dog( void );
		Dog( Dog const & inst );
		virtual ~Dog( void );

	/* Assignement operator`s overloading */

		Dog	& operator=( Dog const & rhs );

	/* Getters and setters */

		std::string	getType( void ) const;
		void		setType( std::string const & new_type);

		void	setBrain( Brain * br);
		Brain 	*getBrain( void ) const;

	/* Member function */

		virtual void	makeSound( void ) const;

	private:

		Brain	*_brain;

};

#endif
