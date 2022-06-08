/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/08 15:44:16 by abensett         ###   ########.fr       */
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
		Zombie( string name );
		~Zombie( void );
		void announce( void );

	private:
		string _name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
