/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 01:18:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(void) {
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;		// pointer
	string &stringREF = str;		// ref

	cout << &str << endl;			// they have the same address
	cout << stringPTR << endl;		// pointer -> the adress of the pointer is &stringPTR
	cout << &stringREF << endl;		// reference -> Cant = 0 because it's already an address

	cout << str << endl;
	cout << *stringPTR << endl;		//value of the pointer
	cout << stringREF << endl;		//value of the reference

	return 0;
}

