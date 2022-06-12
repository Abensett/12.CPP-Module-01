/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 17:20:02 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	public:
		HumanB( void );						// Default constructor 
		HumanB (const HumanB&);				// Copy constructor
		~HumanB( void );					// Destructor
		HumanB &operator=(const HumanB&);	// Copy assignment operator


  	  	HumanB(string name);
		void setWeapon(const Weapon &Weapon);	// mutateurs = setter -> pas const modifie la valeur de _weapon
    	void attack(void) const;				// accesseur = getter -> Const because readonly

	private:
		string _name;
		const Weapon *_Weapon;

};

#endif
