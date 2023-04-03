/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kistod <kistod@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:23:50 by afrigger          #+#    #+#             */
/*   Updated: 2023/04/03 16:06:21 by kistod           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "../headers/contact.hpp"

Contact::Contact(void){
	
	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){

	std::cout << "Contact Destructor called" << std::endl;
	return;
}

void Contact::AddContact(char *str, int i){
	std::cout << "Insérez prénom du contact :" << std::endl;
	std::cin >> str;
	strcpy(this[i].prenom, str);
	std::cout << "Insérez Nom du contact :" << std::endl;
	std::cin >> str;
	strcpy(this[i].nom, str);
	std::cout << "Insérez surnom du contact :" << std::endl;
	std::cin >> str;
	strcpy(this[i].surnom, str);
	std::cout << "Insérez le numéro du contact :" << std::endl;
	std::cin >> str;
	strcpy(this[i].number, str);
	std::cout << "Quel est son plus grand secret?:" << std::endl;
	std::cin >> str;
	strcpy(this[i].secret, str);
	std::cout << "Contact numero " << i << " enregistré" << std::endl;
}

void Contact::PrintContact(int i){
	std::cout << "Index du contact : " << i << std::endl;
	std::cout << "Prénom du contact : " << this[i].prenom << std::endl;
	std::cout << "Nom du contact : " << this[i].nom << std::endl;
	std::cout << "Surnom du contact : " << this[i].surnom << std::endl;
}