/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 01:27:23 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
#define Weapon_HPP

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Weapon
{
	public:
		Weapon( void );						// Default constructor ->
		Weapon (const Weapon&);				// Copy constructor
		~Weapon( void );					// Destructor
		Weapon &operator=(const Weapon&);	// Copy assignment operator


		const string &getType( void ) const;		// returns a const ref
		void setType(string newType);

	private:
		string _type;

};


#endif
