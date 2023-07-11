/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:16:16 by afrigger          #+#    #+#             */
/*   Updated: 2023/07/11 13:45:17 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact{

	public:
	Contact(void);
	~Contact(void);
	void	AddContact2(std::string str, int i);
	void	PrintContact2(int i);
	void	PrintStart(void);
	void	PrintEnd(void);
	std::string	GetPrenom(void);
	private:
	std::string	prenom;
	std::string	nom;
	std::string	surnom;
	std::string	number;
	std::string	secret;
	
	void	AddContact(std::string str, int i);
	void	PrintContact(int i);
	
};

#endif