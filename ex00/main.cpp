/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <xx>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:36:45 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/05/06 13:57:06 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

// int	main()
// {
// 	int	a = 5;
// 	int	b = 1;

// 	std::cout << "the max is ";
// 	std::cout << max(a, b) << std::endl;

// 	std::cout << "the min is ";
// 	std::cout << min(a, b) << std::endl;

// 	std::cout << "a is " << a << " and b is " << b << std::endl;
// 	swap(a, b);
// 	std::cout << "Now a is " << a << " and b is " << b;


// 	return (0);
// }

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
	}
