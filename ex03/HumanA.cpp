/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:09 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 17:01:03 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

using std::cout;
using std::endl;

HumanA::~HumanA (void) {cout << "Destruction HumanA :"<< _name << endl;};

HumanA::HumanA(string name, const Weapon &weapon) : _name(name),
        _Weapon(weapon) {}

void HumanA::attack(void) const {
    cout << _name << " attacks with their " << _Weapon.getType() << endl;
}