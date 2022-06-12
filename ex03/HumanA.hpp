/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 16:47:13 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class HumanA
{
	public:
		HumanA( void );									// Default constructor ->
		HumanA (const HumanA&);							// Copy constructor
		~HumanA( void );								// Destructor
		HumanA &operator=(const HumanA&);				// Copy assignment operator


  	  	HumanA(string name, const Weapon &weapon);      // mutateurs = setter -> pas const modifie la valeur de _weapon
    	void attack(void) const;				        // accesseur = getter -> Const because readonly

	private:
		string _name;
		const Weapon &_Weapon;

};

#endif