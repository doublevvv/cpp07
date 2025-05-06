/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <xx>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:14:21 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/06 14:09:46 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

template <typename T>
void	swap(T &a, T &b)
{
	T c = 0;

	c = b;
	b = a;
	a = c;
}

template<typename T>
T	min(T &a, T &b)
{
	if (a > b)
		return (b);
	else if (a == b)
		return (b);
	else
		return (a);
}
template<typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return (a);
	else if (a == b)
		return (b);
	else
		return (b);
}
