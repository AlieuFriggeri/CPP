/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kistod <kistod@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:23:43 by afrigger          #+#    #+#             */
/*   Updated: 2023/04/03 16:18:23 by kistod           ###   ########.fr       */
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
	char	input[100];
	int i = 0;
	int index = 0;

	while (1)
	{
/* 		if (i != 0)
			std::cout << repertoire.contacts[index].prenom << std::endl; */
		std::cout << "Que voulez vous faire?" << std::endl;
		std::cin >> input;
		if (strncmp(input, "EXIT", 4) == 0)
			break;
		else if (strncmp(input, "ADD", 3) == 0)
		{
			repertoire.contacts->AddContact(input, i);
			i++;
		}
		else if (strncmp(input, "SEARCH", 6) == 0)
		{
			while (1)
			{
				std::cout << "Entrez l'index du contact rechercher" << std::endl;
				std::cin >> input;
				if (strlen(input) > 1 || atoi(input) > 7 || atoi(input) < 0)
					std::cout << "index non valide, vueillez entrez un chiffre (0 - 7)";
				else
				{
					index = atoi(input);
					repertoire.contacts->PrintContact(index);
					break;
				}
			}
		}
		if (i >= 7)
			i = 0;
	}
	return (0);
}