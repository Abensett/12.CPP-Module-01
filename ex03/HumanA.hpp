/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 01:29:05 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class HumanA
{
	public:
		HumanA( void );						// Default constructor ->
		HumanA (const HumanA&);				// Copy constructor
		~HumanA( void );					// Destructor
		HumanA &operator=(const HumanA&);	// Copy assignment operator


		explicit HumanA( string name );
		void announce( void );
		void set_name(string name);

	private:
		string _name;

};


#endif
