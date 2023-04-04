/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:23:43 by afrigger          #+#    #+#             */
/*   Updated: 2023/04/04 16:06:17 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/contact.hpp"
#include "../headers/phonebook.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>

int main()
{
	PhoneBook repertoire;
	std::string	input;
	int		nb;
	int i = 0;

	while (true)
	{
		std::cout << "Que voulez vous faire?" << std::endl;
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
			while (1)
			{
				std::cout << "Entrez l'index du contact rechercher" << std::endl;
				std::cin >> nb;
				if (nb > 7 || nb < 0)
					std::cout << "index non valide, vueillez entrez un chiffre (0 - 7)";
				else if (repertoire.contacts[nb].GetPrenom().length() == 0)
					std::cout << "Aucun contact avec cet index enregistrer pour le moment" << std::endl;
				else
				{
					repertoire.contacts->PrintStart();
					repertoire.contacts[nb].PrintContact2(nb);
					std::cout << " ___________________________________________" << std::endl;
					break;
				}
			}
		}
		if (i > 7)
			i = 0;
	}
	return (0);
}