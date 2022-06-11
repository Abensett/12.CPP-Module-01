/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 01:12:15 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
/* En c++ on utilise new et delete car ils font appel cons/destr
CAS TABLEAU : CLASS *variable = new CLASS[N]
			  delete [] variable */

int main(void)
{
	Zombie *horde = zombieHorde(5, "Zombie");
	for (unsigned int i = 0 ; i < 5 ; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
