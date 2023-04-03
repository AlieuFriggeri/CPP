/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kistod <kistod@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:49:55 by afrigger          #+#    #+#             */
/*   Updated: 2023/04/03 14:36:21 by kistod           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "./contact.hpp"

class PhoneBook{
	
	
	public :
	Contact contacts[8];
	PhoneBook(void);
	~PhoneBook(void);
	
};

#endif