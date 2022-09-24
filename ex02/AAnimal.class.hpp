/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:27:56 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 22:38:10 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_CLASS_HPP
# define AAnimal_CLASS_HPP

#include <string>
#include <iostream>

class	AAnimal
{
	public:

	/* Constructors and destructor */

		AAnimal( void );
		AAnimal( AAnimal const & inst );
		virtual ~AAnimal( void );

	/* Assignement operator`s overloading */

		AAnimal	& operator=( AAnimal const & rhs );

	/* Member function */

		virtual void	makeSound( void ) const = 0;

	/* Getters and setters */

		std::string	getType( void ) const;
		void		setType( std::string const & new_type);

	protected:

		std::string	type;
	
	private:


};

#endif
