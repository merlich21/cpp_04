/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:29:32 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 20:38:52 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "AMateria.class.hpp"

class	Ice : public AMateria
{

	public:

		Ice( void );
		Ice( Ice const & inst );
		virtual	~Ice( void );

		Ice &	operator=( Ice const & rhs );

		virtual AMateria	*clone( void ) const;
		virtual void		use( ICharacter & target );

};

#endif
