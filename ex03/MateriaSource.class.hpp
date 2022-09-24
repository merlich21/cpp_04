/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:03:55 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 22:52:34 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

#include "IMateriaSource.class.hpp"

#define TEMPL	4

class MateriaSource : public IMateriaSource
{
	public:
		
		MateriaSource( void );
		MateriaSource( MateriaSource const & inst );
		virtual	~MateriaSource( void );

		MateriaSource &	operator=( MateriaSource const & rhs );

		virtual void		learnMateria( AMateria * m );
		virtual AMateria	*createMateria( std::string const & type );

	private:

		AMateria	*_templates[TEMPL];

};

#endif
