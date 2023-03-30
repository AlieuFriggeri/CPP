/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:05:30 by afrigger          #+#    #+#             */
/*   Updated: 2023/03/30 11:31:37 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISES *" << std::endl;
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			for (size_t j = 0; j < std::strlen(av[i]); j++)
				av[i][j] = std::toupper(av[i][j]);
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	return (0);
}