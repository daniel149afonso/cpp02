/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:24:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/22 18:57:22 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed{
	private:
		std::string _name;
	public:
	
};

class Point {
public:
	int x, y;

	Point(int x, int y) : x(x), y(y) {}

	Point operator+(const Point& other) const {
		return Point(x + other.x, y + other.y);
	}
};

