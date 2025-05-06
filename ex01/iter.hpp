/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <xx>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:44:30 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/06 15:20:01 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

template<typename T, typename U, typename V, typename W>
void	iter(T *array, U length, void (*f)(W))
{
	int i = 0;

	while (array[i])
	{
		f(array[i]);
		i++;
	}
	return ;
}
