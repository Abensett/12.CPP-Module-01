/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:13 by abensett          #+#    #+#             */
/*   Updated: 2022/06/08 16:52:27 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cin;
using std::cout;
using std::endl;

Zombie::Zombie (string name) : _name(name) {}
Zombie::Zombie(void) : _name("") {}
Zombie::~Zombie (void) {cout << "Destruction Zombie :"<< _name << endl;};

void Zombie::announce (void)
{
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}


void Zombie::set_name (string name)
{
	_name = name;
}
