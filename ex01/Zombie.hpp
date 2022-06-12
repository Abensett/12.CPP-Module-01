/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 16:47:13 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Zombie
{
	public:
		Zombie( void );						// Default constructor ->
		Zombie (const Zombie&);				// Copy constructor
		~Zombie( void );					// Destructor
		Zombie &operator=(const Zombie&);	// Copy assignment operator


		Zombie( string name );
		void announce( void );
		void set_name(string name);

	private:
		string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
