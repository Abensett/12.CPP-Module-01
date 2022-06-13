/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:09 by abensett          #+#    #+#             */
/*   Updated: 2022/06/13 02:44:29 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

Harl::~Harl (void) {} ;

Harl::Harl(void) {};

void Harl::complain( std::string level )
{

	int i;

	const  string ErrorsD[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (i = 0; i < 4; i++)
	{
		if (level == ErrorsD[i])			// break when error found the value of i stops here
			break;
	}
	switch (i)								// printf the error of index i and all the ones after
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
		break;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;

	}
}

 void Harl::debug(void) const
	{
	cout << "[ DEBUG ]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle" << endl;
	cout << "-special-ketchup burger. I really do!" << endl  << endl;
	}

	void Harl::info(void) const
	{
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn't"
			" put enough bacon in my burger! If you did, I wouldn't be asking"
			" for more!" << endl << endl;
	}

	void Harl::warning(void) const
	{
		cout << "[ WARNING ]" << endl;
		cout << "I think I deserve to have some extra bacon for free."<<endl;
		cout <<"I've been coming for years whereas you started working here since last month." << endl  << endl;
	}

	void Harl::error(void) const
	{
		cout << "[ ERROR ]" << endl;
		cout << "This is unacceptable! I want to speak to the manager now." << endl  << endl;
	}

