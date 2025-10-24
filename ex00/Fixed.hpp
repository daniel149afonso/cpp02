/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:24:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/24 13:14:15 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed{
	private:
		int _number;
		static const int raw_bits;
	public:
		Fixed(void);
		Fixed(const Fixed& n);
		Fixed &operator=(const Fixed& n);
		~Fixed(void);
	
};

class Vector {
	public:
		int	x;
		int	y;
	public:
		Vector(int x, int y): x(x), y(y) {}
		
		Vector operator-(Vector& other) {
			return Vector(x - other.x, y - other.y);
		}
};
