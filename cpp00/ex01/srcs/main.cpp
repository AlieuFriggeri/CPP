/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:23:43 by afrigger          #+#    #+#             */
/*   Updated: 2023/07/12 11:42:12 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Contact.hpp"
#include "../headers/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

int main()
{
	PhoneBook repertoire;
	std::string	input;
	int		nb;
	std::string snb;
	int i = 0;

	while (true)
	{
		std::cout << "Que voulez vous faire? (ADD / SEARCH / EXIT)" << std::endl;
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break;
		else if (std::cin.eof())
			break;
		else if (input.compare("ADD") == 0)
		{
			repertoire.contacts[i].AddContact2(input, i);
			i++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			repertoire.contacts->PrintStart();
			for(int index = 0; index < 8 && repertoire.contacts[index].GetPrenom().length() > 0; index++)
				{
					repertoire.contacts[index].PrintContact2(index);
				}
			std::cout << "|___________________________________________|" << std::endl;
			while (1)
			{
				std::cout << "Entrez l'index du contact rechercher" << std::endl;
				std::cin >> nb;
				std::cin.clear();
				std::cin.ignore(1000, '\n');
				if (nb > 8 || nb < 1 || nb == -123123)
				{
					std::cout << "index non valide, veuillez entrez un chiffre (1 - 8)" << std::endl;
					std::cin.clear();
				}
				else if (repertoire.contacts[nb - 1].GetPrenom().length() == 0)
				{
					std::cout << "Aucun contact avec cet index enregistrer pour le moment" << std::endl;
					break;
				}
				else
				{
					repertoire.contacts->PrintStart();
					repertoire.contacts[nb - 1].PrintContact2(nb - 1);
					std::cout << " ___________________________________________" << std::endl;
					break;
				}
				std::cin.clear();
			}
			
		}
		if (i > 7)
			i = 0;
	}
	return (0);
}