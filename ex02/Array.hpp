/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:23:35 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/07 13:20:36 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
#define Array_HPP

#include <iostream>

template<typename T> class Array
{
	public:
		Array(){}; //* Construction with no parameter: Creates an empty array
		Array(unsigned int n); //*Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.]
		~Array();
		Array(Array const &obj);
		Array<T> &operator=(const Array &rhs);
		int	size(void); //* not modify the current instance
		int	operator[](int i);

	private:
};

#endif

template<typename T>
Array<T>::Array()
{
	std::cout << "Array Default Constructor called" << std::endl;
	std::string	tab[0] = {};
}
template<typename T>
Array<T>::Array(unsigned int n)
{
	std::string	tab[n] = {};
}
template<typename T>
Array<T>::Array(const Array &obj)
{
	std::cout << "Array Copy Constructor called" << std::endl;
	*this = obj;
}
template<typename T>
Array<T>::~Array()
{
	std::cout << "Array Destructor called " << std::endl;
}
template<typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
	std::cout << "Array Copy Assignment Operator called" <<  std::endl;
	return (*this);
}

template<typename T>
int	Array<T>::operator[](int i)
{
	try
	{
		if ((i >= 0) && i < n)
			return (tab[i]);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	return (0)
}


