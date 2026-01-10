/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:47:40 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/10 12:06:54 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

Fixed::Fixed( const int toInt ) {
	_fixedPointNbV = toInt << _nbBits;
}

Fixed::Fixed( const float toFloat ) {
	_fixedPointNbV = roundf(toFloat * (1 << _nbBits));
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return (_fixedPointNbV);
}

void Fixed::setRawBits( int const raw ) {
	_fixedPointNbV = raw;
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(_fixedPointNbV) / (1 << _nbBits));
}

int	Fixed::toInt( void ) const {
	return (_fixedPointNbV >> _nbBits);
}

// bool Fixed::greaterThan(Fixed a, Fixed b) {
// 	if (a._fixedPointNbV > b._fixedPointNbV)
// 		printf ("slay\n");// return (true);
// 	else 
// 		printf ("false slay\n");return (false);
// }

bool Fixed::operator>(const Fixed& obj) {
	if (this > &obj)
		return (true);
	else 
		return (false);
}

bool Fixed::operator<(const Fixed& obj) {
	if (this < &obj)
		return (true);
	else 
		return (false);
}

bool Fixed::operator>=(const Fixed& obj) {
	if (this >= &obj)
		return (true);
	else 
		return (false);
}

bool Fixed::operator<=(const Fixed& obj) {
	if (this <= &obj)
		return (true);
	else 
		return (false);
}

bool Fixed::operator==(const Fixed& obj) {
	if (this == &obj)
		return (true);
	else 
		return (false);
}

bool Fixed::operator!=(const Fixed& obj) {
	if (this != &obj)
		return (true);
	else 
		return (false);
}

void *Fixed::operator+(const Fixed& obj) {
	
}
		
Fixed operator-(const Fixed& obj) {
			
}
		
Fixed operator*(const Fixed& obj) {
			
}
		
Fixed operator/(const Fixed& obj) {
			
}
		
// static Fixed min(Fixed a, Fixed b) {

// }

// static Fixed min(const Fixed a, const Fixed b) {

// }

// static Fixed max(Fixed a, Fixed b) {
	
// }

// static Fixed max(const Fixed a, const Fixed b) {

// }
