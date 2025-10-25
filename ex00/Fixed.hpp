/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:24:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/25 15:24:55 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int _number; //the fixed-point number
		static const int _raw_bits = 8;
	public:
		Fixed(void);
		Fixed(const int n); // not necessary
		Fixed(const Fixed& n);
		Fixed &operator=(const Fixed& n);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	
};

#endif

//Exemple Surchage d'opérateur:
// class Vector {
// 	public:
// 		int	x;
// 		int	y;
// 	public:
// 		Vector(int x, int y): x(x), y(y) {}
		
// 		Vector operator-(Vector& other) {
// 			return Vector(x - other.x, y - other.y);
// 		}
// };