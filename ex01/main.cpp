/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <xx>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:37:26 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/06 15:14:50 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft_toupper(std::string tab)
{
	for (int i = 0; i < tab.length(); i++)
		tab[i] = toupper(tab[i]);
}

int main()
{

	char tab[] = "hello";

	std::cout << "" << tab << std::endl;
	iter(tab, 6, ft_toupper(tab));
	return (0);
}
