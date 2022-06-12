/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/13 00:36:25 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
#define Harl_HPP

#include <iostream>
#include <string>

using std::string;


class Harl
{
	public:
		Harl( void );								// Default constructor
		Harl (const Harl&);							// Copy constructor
		~Harl( void );								// Destructor
		Harl &operator=(const Harl&);				// Copy assignment operator

		void complain( std::string level );

	private:
		void debug( void ) const;
		void info( void ) const;
		void warning( void ) const;
		void error( void ) const;
};

#endif
