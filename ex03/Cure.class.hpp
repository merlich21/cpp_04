/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:29:32 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 20:38:49 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

#include "AMateria.class.hpp"

class	Cure : public AMateria
{

	public:

		Cure( void );
		Cure( Cure const & inst );
		virtual	~Cure( void );

		Cure &	operator=( Cure const & rhs );

		virtual AMateria	*clone( void ) const;
		virtual void		use( ICharacter & target );

};

#endif
