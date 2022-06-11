/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 01:29:20 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class HumanB
{
	public:
		HumanB( void );						// Default constructor ->
		HumanB (const HumanB&);				// Copy constructor
		~HumanB( void );					// Destructor
		HumanB &operator=(const HumanB&);	// Copy assignment operator


		explicit HumanB( string name );
		void announce( void );
		void set_name(string name);

	private:
		string _name;

};

HumanB* HumanBHorde( int N, std::string name );

#endif
