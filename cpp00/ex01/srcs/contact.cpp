/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:23:50 by afrigger          #+#    #+#             */
/*   Updated: 2023/03/30 13:34:53 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/contact.hpp"

Contact::Contact(void){
	
	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){

	std::cout << "Contact Destructor called" << std::endl;
	return;
}