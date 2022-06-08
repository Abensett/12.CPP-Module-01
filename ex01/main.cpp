/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/08 16:37:57 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
/* En c++ on utilise new et delete car ils font appel cons/destr
CAS TABLEAU : CLASS *variable = new CLASS[N]
              delete [] variable */

int main(void)
{
    Zombie *Zombis = zombieHorde(5, "Zims");
    delete  [] Zombis;
    return 0;
}
