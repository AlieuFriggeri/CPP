/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kistod <kistod@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:16:16 by afrigger          #+#    #+#             */
/*   Updated: 2023/04/03 16:04:31 by kistod           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact{

public :
	char	prenom[100];
	char	nom[100];
	char	surnom[100];
	char	number[100];
	char	secret[100];


	Contact(void);
	~Contact(void);
	
	void	AddContact(char *str, int i);
	void	PrintContact(int i);
};

#endif