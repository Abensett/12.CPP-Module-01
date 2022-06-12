/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:13 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 17:00:04 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

using std::cin;
using std::cout;
using std::endl;

Weapon::Weapon (string name) : _type(name) {}
Weapon::Weapon(void) : _type("") {}
Weapon::~Weapon (void) {cout << "Destruction Weapon :"<< _type << endl;};

const string &Weapon::getType (void) const
{
	return(_type);
}

void Weapon::setType (string newType)
{
	_type = newType;
}
