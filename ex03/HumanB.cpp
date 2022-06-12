/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:09 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 17:01:12 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using std::cout;
using std::endl;

HumanB::~HumanB (void) {cout << "Destruction HumanB :"<< _name << endl;};		// Destructor

HumanB::HumanB(string name) : _name(name), _Weapon(NULL) {}						// Constructor d'initialisation

void HumanB::setWeapon(const Weapon &weapon) {
    _Weapon = &weapon;
}

void HumanB::attack(void) const {
    if (_Weapon)
        cout << _name << " attacks with their " << _Weapon->getType() << endl;
    else
        cout << _name << " is not equipped with a weapon" << endl;
}