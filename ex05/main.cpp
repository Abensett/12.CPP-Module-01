/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 23:13:45 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <iostream>
#include <string>
#include "Harl.hpp"

using std::cout;
using std::endl;


int main(void)
{
	Harl Harlito;

	Harlito.complain("DEBUG");
	cout << endl;
	Harlito.complain("INFO");
	cout << endl;
	Harlito.complain("WARNING");
	cout << endl;
	Harlito.complain("ERROR");
	cout << endl;
}
