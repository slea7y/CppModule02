/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:47:40 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/15 17:01:43 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNbV(0) { std::cout << "Default constructor called\n";}

Fixed::Fixed(const Fixed &obj) { 
	_fixedPointNbV = obj._fixedPointNbV;
	std::cout << "Copy constructor called" << std::endl ;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called\n";
	if ( this != &other )
		_fixedPointNbV = other._fixedPointNbV;
	return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

void Fixed::setRawBits( int const raw ) {
	_fixedPointNbV = raw;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return (_fixedPointNbV);
}