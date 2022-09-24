/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:54:22 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 22:48:56 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class	Cat : public AAnimal
{
	public:

	/* Constructors and destructor */

		Cat( void );
		Cat( Cat const & inst );
		virtual ~Cat( void );

	/* Assignement operator`s overloading */

		Cat	& operator=( Cat const & rhs );

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
