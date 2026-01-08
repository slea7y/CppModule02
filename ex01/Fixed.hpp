/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:47:43 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/08 20:47:10 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int _fixedPointNbV;
		static const int _nbBits = 8;
	public:
		// A default constructor
		Fixed() : _fixedPointNbV(0) { std::cout << "Default constructor called\n";} ;
		// A copy constructor
		Fixed(const Fixed &obj) { 
			_fixedPointNbV = obj._fixedPointNbV;
			std::cout << "Copy constructor called\n" ;};
		// A copy assignment operator overload.
		Fixed &operator=(const Fixed &other) {
			std::cout << "Copy assignment operator called\n";
			if ( this != &other )
				_fixedPointNbV = other._fixedPointNbV;
			return *this;
		};
		// A destructor.
		~Fixed() { std::cout << "Destructor called\n"; }; 
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif