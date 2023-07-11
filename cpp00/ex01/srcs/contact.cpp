/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:23:50 by afrigger          #+#    #+#             */
/*   Updated: 2023/07/11 15:57:39 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "../headers/Contact.hpp"

Contact::Contact(void){
	
	//std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){

	//std::cout << "Contact Destructor called" << std::endl;
	return;
}

void Contact::AddContact(std::string str, int i){
	std::cout << "Insérez Prénom du contact :" << std::endl;
	do{
	std::getline(std::cin,  str);
	if (std::cin.eof())
		exit(1);
	}while(str.empty());
	this->prenom = str;
	std::cout << "Insérez Nom du contact :" << std::endl;
	do{
	std::getline(std::cin,  str);
	if (std::cin.eof())
		exit(1);
	}while(str.empty());
	this->nom = str;
	std::cout << "Insérez Surnom du contact :" << std::endl;
	do{
	std::getline(std::cin,  str);
	if (std::cin.eof())
		exit(1);
	}while(str.empty());
	this->surnom = str;
	std::cout << "Insérez le Numéro du contact :" << std::endl;
	do{
	std::getline(std::cin,  str);
	if (std::cin.eof())
		exit(1);
	}while(str.empty());
	this->number = str;
	std::cout << "Quel est son plus grand Secret?:" << std::endl;
	do{
	std::getline(std::cin,  str);
	if (std::cin.eof())
		exit(1);
	}while(str.empty());
	this->secret = str;
	std::cout << "Contact numero " << i + 1 << " enregistré" << std::endl;
}

void Contact::PrintContact(int i){
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << std::setfill(' ');
	std::cout << i + 1;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << std::setfill(' ');
	if (this->prenom.length() >= 10)
		std::cout << this->prenom.substr(0, 8) + '.';
	else
		std::cout << this->prenom;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << std::setfill(' ');
	if (this->prenom.length() >= 10)
		std::cout << this->nom.substr(0, 8) + '.';
	else
		std::cout << this->nom;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << std::setfill(' ');
	if (this->prenom.length() >= 10)
		std::cout << this->surnom.substr(0, 8) + '.';
	else
		std::cout << this->surnom;
	std::cout << "|" << std::endl;
}

void Contact::PrintStart(void){
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     Index|    Prenom|       Nom|    Surnom|" << std::endl;
}

void Contact::AddContact2(std::string str, int i){
	AddContact(str, i);
}

void Contact::PrintContact2(int i){
	PrintContact(i);
}

std::string Contact::GetPrenom(void)
{
	return (this->prenom);
}