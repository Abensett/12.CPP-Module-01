/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/13 01:29:27 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
/* En c++ on utilise new et delete car ils font appel cons/destr
	StackZ  la stack d'où  destruction at the end of the function
	randomChump stack de la fonction RandomChump */
int main(void)
{
	randomChump("Random");						// Allocation statique -> stack de RandomChump

	Zombie *heapz = newZombie("HeapZ");			// Allocation dynamique -> heap
	heapz->announce();

	Zombie stackz = Zombie("StackZ");			// Allocation statique -> stack
	stackz.announce();

	delete heapz;								// Free
	return 0;
}
