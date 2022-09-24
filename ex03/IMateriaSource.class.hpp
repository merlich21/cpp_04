/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:03:55 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 21:05:56 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_HPP
# define IMATERIASOURCE_CLASS_HPP

#include "AMateria.class.hpp"

class IMateriaSource
{
	public:

		virtual	~IMateriaSource() {}
		virtual void		learnMateria( AMateria * ) = 0;
		virtual AMateria	*createMateria( std::string const & type ) = 0;

};

#endif
