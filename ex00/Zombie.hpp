/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 00:57:39 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/* From now on  Classes gotta be Orthodox Canonical Form:
- Default constructor
- Copy constructor
- Destructor
- Copy assignment operator
*/
class Zombie
{
	public:
		Zombie( void );						// Default constructor -> no args
		Zombie (const Zombie&);				// Copy constructor	   -> used to copy
		~Zombie( void );					// Destructor		   -> deleter
		Zombie &operator=(const Zombie&);	// Copy assignment operator 

		Zombie( string name );			// Constructeur d'initialisationa avec argument
		void announce( void );

	private:
		string _name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
