/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:47:40 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/10 19:55:57 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

Fixed::Fixed() : _fixedPointNbV(0) { std::cout << "Default constructor called\n";}

Fixed::Fixed(const Fixed &obj) { 
	_fixedPointNbV = obj._fixedPointNbV;
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called\n";
	if ( this != &other )
		_fixedPointNbV = other._fixedPointNbV;
	return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }; 

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

Fixed Fixed::operator+(const Fixed& obj) {
	Fixed result = Fixed(*this);
	result._fixedPointNbV += obj._fixedPointNbV;
	return (result);
}
		
Fixed Fixed::operator-(const Fixed& obj) {
	Fixed result = Fixed(*this);
	result._fixedPointNbV -= obj._fixedPointNbV;
	return (result);
}
		
Fixed Fixed::operator*(const Fixed& obj) {
	Fixed result = Fixed(*this);
	result._fixedPointNbV *= obj._fixedPointNbV;
	return (result);
}
		
Fixed Fixed::operator/(const Fixed& obj) {
	Fixed result = Fixed(*this);
	result._fixedPointNbV /= obj._fixedPointNbV;
	return (result);
}
		
Fixed Fixed::operator++( int ) {
	Fixed result;
	result = this->_fixedPointNbV++;
	return (result);
}

Fixed Fixed::operator++( void ) {
	Fixed result;
	result = this->_fixedPointNbV++;
	return (result);
}

Fixed Fixed::operator--( void ) {
	Fixed result;
	result = this->_fixedPointNbV--;
	return (result);
}

Fixed Fixed::operator--( int ) {
	Fixed result;
	result = this->_fixedPointNbV--;
	return (result);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a.operator<(b) == true)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (&a < &b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a.operator>(b) == true)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (&a > &b)
		return (a);
	else
		return (b);
}
