/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:29:32 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 22:43:24 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

#include <string>
#include <iostream>
#include "ICharacter.class.hpp"

class	ICharacter;

class	AMateria
{

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & inst );
		virtual	~AMateria( void );

		AMateria &	operator=( AMateria const & rhs );

		std::string const &	getType( void ) const;  // Returns the materia type
		void				setType( std::string const & value);

		virtual AMateria	*clone( void ) const = 0;
		virtual void		use( ICharacter & target );

	private:

		std::string	_type;

};

#endif
