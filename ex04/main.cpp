/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/12 21:39:17 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <iostream>
#include <string>

using std::ifstream;					//infilestream self-explanatonatory
using std::ofstream;					//outfilestream
using std::ios;

using std::cerr;						// sortie d'erreur
using std::cout;
using std::endl;
using std::getline;
using std::size_t;
using std::string;


int main(int ac, char **av)
{
	if (ac != 4)
	{
		cerr << "./replace <filename> <s1> <s2>  -> s1 will be replaced by s2  ;)" << endl;
		return 1;
	}

	string infile(av[1]);										//name of the infile -> file to change
	ifstream fin;												//infile stream -> fichier de flux d'entree
	fin.open(infile.c_str(), ios::in);							//in means input -> the file is open for reading the Internal Stream buffer supports input operations
																//c_str turns string to const char *
	if (!fin)
	{
		cerr << "Error : while opening the file " << infile << endl;
		return 1;
	}

	string outfile = infile + ".replace";							//name of the outfile -> newfile
	ofstream fout;													//outfile stream -> fichier de flux de sortie
	fout.open(outfile.c_str(), ios::out | ios::trunc);				//out means output -> open for writing, trunc -> suppress any existing content
																	//c_str turns string to const char *

	if (!fout)
	{
		cerr << "Error : while opening/creating the file " << outfile << endl;
		return 3;
	}

	string tmp = "";
	string input = "";
	while (!fin.eof())
	{
		getline(fin, tmp);
		input += tmp;
		if (!fin.eof())
			input += '\n';
	}
	fin.close();												// Closing the infile

	string s1 = av[2];
	string s2 = av[3];
	size_t position = input.find(s1);							//str.find(s1) return 1st occurence of s1, if not found return npos

	while (position != string::npos)							// npos = max value of size_t = not found with find
	{
		input.erase(position, s1.length());						// erase len character at position
		input.insert(position, s2);								// insert s2 at position
		position = input.find(s1, position + s2.length());
	}

	fout << input;
	fout.close();												// Closing the outfile

	return 0;
}
