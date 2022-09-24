/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:54:22 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 20:03:31 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongCat_CLASS_HPP
# define WRONGWrongCat_CLASS_HPP

#include "WrongAnimal.class.hpp"

class	WrongCat : public WrongAnimal
{
	public:

	/* Constructors and destructor */

		WrongCat( void );
		WrongCat( WrongCat const & inst );
		virtual ~WrongCat( void );

	/* Assignement operator`s overloading */

		WrongCat	& operator=( WrongCat const & rhs );

	/* Getters and setters */

		std::string	getType( void ) const;
		void		setType( std::string const & new_type);


	/* Member function */

		void	makeSound( void ) const;

};

#endif
