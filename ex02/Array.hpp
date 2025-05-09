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

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

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
		T	*array;
		int	size;
};

#endif

template<typename T>
Array<T>::Array()
{
	std::cout << "Array Default Constructor called" << std::endl;
	this->array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
}

template<typename T>
Array<T>::Array(const Array &obj)
{
	std::cout << "Array Copy Constructor called" << std::endl;
	this->size = obj.size;
	this->array = new T[size];

	(*this) = obj;
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Array Destructor called " << std::endl;
	delete [] this->array;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
	std::cout << "Array Copy Assignment Operator called" <<  std::endl;
	this->size = rhs.size;
	this->size = new T[size];
	for (int i = 0; i < rhs.size; i++)
		this->array[i] = rhs.array[i];
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
	return (0);
}

int	Array::size(void)
{
	return (this->size);
}


