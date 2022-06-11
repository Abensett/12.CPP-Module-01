/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:13 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 01:28:25 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

using std::cin;
using std::cout;
using std::endl;

Weapon::Weapon (string name) : _name(name) {}
Weapon::Weapon(void) : _name("") {}
Weapon::~Weapon (void) {cout << "Destruction Weapon :"<< _name << endl;};

const string &Weapon::getType (void)
{
	return(&_type);
}

void Weapon::setType (string newType)
{
	_type = newType;
}
