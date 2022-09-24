/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:54:22 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 19:50:55 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "Animal.class.hpp"

class	Cat : public Animal
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


	/* Member function */

		virtual void	makeSound( void ) const;

};

#endif
