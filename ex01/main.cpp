/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/08 15:58:16 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
/* En c++ on utilise new et delete car ils font appel cons/destr */
int main(void)
{
    Zombie *heapz = newZombie("HeapZ");
    heapz->announce();

    Zombie stackz = Zombie("StackZ");
    stackz.announce();

    randomChump("Random");
    delete heapz;
    return 0;
}
