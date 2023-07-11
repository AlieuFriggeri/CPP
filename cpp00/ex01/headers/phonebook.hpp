/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:49:55 by afrigger          #+#    #+#             */
/*   Updated: 2023/07/11 13:15:18 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "./Contact.hpp"

class PhoneBook{
	
	
	public :
	Contact contacts[8];
	PhoneBook(void);
	~PhoneBook(void);
	
};

#endif