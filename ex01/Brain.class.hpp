/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:09:17 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 21:10:20 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <string>
#include <iostream>

class	Brain
{
	public:

		Brain( void );
		Brain( Brain const & inst );
		~Brain( void );

		Brain &	operator=( Brain const & rhs );

		void		addIdeas( std::string new_idea );
		void		setIdeas( std::string new_idea, unsigned int index );
		std::string	getIdeas( unsigned int index ) const;

	private:

		std::string	ideas[100];
		int			_count;

};

#endif
