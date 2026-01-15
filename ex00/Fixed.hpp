/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:47:43 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/15 17:00:34 by majkijew         ###   ########.fr       */
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
		Fixed();
		// A copy constructor
		Fixed(const Fixed &obj);
		// A copy assignment operator overload.
		Fixed &operator=(const Fixed &other);
		// A destructor.
		~Fixed(); 
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif