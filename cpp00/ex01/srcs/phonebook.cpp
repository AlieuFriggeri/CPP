/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:49:52 by afrigger          #+#    #+#             */
/*   Updated: 2023/03/30 13:37:26 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/phonebook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void){

	std::cout << "PhoneBook Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){

	std::cout << "PhoneBook Destructor called" << std::endl;
}