/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:24:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/27 20:16:40 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> //round()

class Fixed{
	private:
		int _number;
		static const int _raw_bits = 8;
	public:
		// Constructors
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& n);

		// Destructor
		~Fixed(void);
		
		// Overloaded Operators
		Fixed &operator=(const Fixed& n);

		// Comparison Operators
		bool operator>(const Fixed& n) const;
		bool operator<(const Fixed& n) const;
		bool operator>=(const Fixed& n) const;
		bool operator<=(const Fixed& n) const;
		bool operator==(const Fixed& n) const;
		bool operator!=(const Fixed& n) const;

		// Arithmetic Operators
		Fixed operator+(const Fixed& n) const;
		Fixed operator-(const Fixed& n) const;
		Fixed operator*(const Fixed& n) const;
		Fixed operator/(const Fixed& n) const;

		// Incrementation / decrementation
		Fixed& operator++();    // pré-incrément (++a)
		Fixed operator++(int);  // post-incrément (a++)
		Fixed& operator--();    // pré-décrément (--a)
		Fixed operator--(int);  // post-décrément (a--)

		// Functions min / max
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		// Getter
		int getRawBits(void) const;
		// Setter
		void setRawBits(int const raw);
		
		// Public Methods
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
