/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:45:51 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/10 20:02:59 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int
main( void ) { 
	Fixed a(10);
	Fixed b(2);
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	a.operator>(b);
	std::cout << a << std::endl;
	std::cout << a.operator*(b) << std::endl;
	std::cout << a.operator/(b) << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0; 
}