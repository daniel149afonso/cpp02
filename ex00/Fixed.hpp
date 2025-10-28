/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:24:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/28 14:28:57 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int _number; //the fixed-point number
		static const int _raw_bits = 8; //not used in this exercise
	public:
		Fixed(void);
		Fixed(const int n); // (optional) not necessary to complete the mandatory part
		Fixed(const Fixed& n);
		Fixed &operator=(const Fixed& n);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	
};

#endif
