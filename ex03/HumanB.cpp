/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:09 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 01:11:38 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

using std::stringstream;
Zombie* zombieHorde( int N, std::string name)
{
	stringstream tmp;
	string numero;
	int i = 0;

	Zombie *horde = new Zombie[N];
	while (i < N)
	{
		tmp << i;										// conversion avec stringstream equivaut itoa ou to_string (c++11)
		numero = tmp.str();
		horde[i].set_name(name +" numero "+ numero);
		i++;
		tmp.str("");									// clear stringstream sinon les chiffres se cumulent 01234
	}
	return (horde);
}
