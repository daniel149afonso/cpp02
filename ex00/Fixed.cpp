/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:24:30 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/29 14:57:38 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void): _number(0)
{
	std::cout << "Default constructor called"<<std::endl;
}

// Constructor with parameters
Fixed::Fixed(const int n): _number(n)
{
	std::cout << "Constructor with parameters called"<<std::endl;
}

// Copy constructor: init a new object and copy his content
Fixed::Fixed(const Fixed& n): _number(n._number)
{
	std::cout << "Copy constructor called" << std::endl;
}

// Assignement operator: this operator copies the content from an existing object to another existing object
Fixed& Fixed::operator=(const Fixed& n)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &n) // ⚠️ Protection against auto-assignement (a = a)
		_number = n._number; // = n._number is also correct
	return (*this); // ✅ return the current object, it allows us to do something like this  : a = (b = c);
}

// Desctructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called"<<std::endl;
}

// Getter
int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called"<<std::endl;
	return (_number);
}

// Setter
void Fixed::setRawBits(int const raw)
{
	_number = raw;
}
