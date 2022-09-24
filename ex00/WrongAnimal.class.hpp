/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:27:56 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 20:02:34 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class	WrongAnimal
{
	public:

	/* Constructors and destructor */

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & inst );
		virtual ~WrongAnimal( void );

	/* Assignement operator`s overloading */

		WrongAnimal	& operator=( WrongAnimal const & rhs );

	/* Member function */

		void	makeSound( void ) const;

	/* Getters and setters */

		std::string	getType( void ) const;
		void		setType( std::string const & new_type);

	protected:

		std::string	type;
	
	private:


};

#endif
