/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:09 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 23:13:07 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

Harl::~Harl (void) {cout << "Destruction of Harl "<< endl;};

Harl::Harl(void) {cout << "Construction of Harl "<< endl;};

void Harl::complain( std::string level ){

	const ErrorDictionnary ErrorsD[4] =
	{
		{ "DEBUG", &Harl::debug },
		{ "INFO", &Harl::info },
		{ "WARNING", &Harl::warning },
		{ "ERROR", &Harl::error }
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == ErrorsD[i].key)
		{
			void (Harl::*func)(void) const = ErrorsD[i].func;
			(this->*func)();
			break;
		}
	}
}

 void Harl::debug(void) const
	{
	cout << " DEBUG " << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle"
			"-special-ketchup burger. I really do!" << endl;
	}

	void Harl::info(void) const
	{
	cout << " INFO " << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn't"
			" put enough bacon in my burger! If you did, I wouldn't be asking"
			" for more!" << endl;
	}

	void Harl::warning(void) const
	{
		cout << " WARNING " << endl;
		cout << "I think I deserve to have some extra bacon for free. I've been"
				" coming for years whereas you started working here since last"
				" month." << endl;
	}

	void Harl::error(void) const
	{
		cout << " ERROR " << endl;
		cout << "This is unacceptable! I want to speak to the manager now." << endl;
	}

