/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kistod <kistod@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:49:52 by afrigger          #+#    #+#             */
/*   Updated: 2023/04/03 15:47:16 by kistod           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/phonebook.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook(void){

	std::cout << "PhoneBook Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){

	std::cout << "PhoneBook Destructor called" << std::endl;
}