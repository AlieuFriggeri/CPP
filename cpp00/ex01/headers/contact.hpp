/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:16:16 by afrigger          #+#    #+#             */
/*   Updated: 2023/04/04 11:28:55 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact{

public :
	std::string	prenom;
	std::string	nom;
	std::string	surnom;
	std::string	number;
	std::string	secret;


	Contact(void);
	~Contact(void);
	
	void	AddContact(std::string str, int i);
	void	PrintContact(int i);
	void	PrintStart(void);
	void	PrintEnd(void);
};

#endif