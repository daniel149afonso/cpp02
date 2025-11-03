/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:24:30 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/29 14:58:13 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void): _number(0)
{
	std::cout << "Default constructor called"<<std::endl;
}

// Constructor with int parameter
Fixed::Fixed(const int n)
{
	_number = n << _raw_bits; // décalage binaire à gauche = multiplication par 2^_raw_bits
	std::cout << "Int constructor called"<<std::endl;
}

// Constructor with float parameter
Fixed::Fixed(const float n)
{
	_number = roundf(n * (1 << _raw_bits));
	std::cout << "Float constructor called"<<std::endl;
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

// Convert to float
float Fixed::toFloat(void) const
{
	return (float)_number / (1 << _raw_bits);
}

// Convert to int
int Fixed::toInt(void) const
{
	return _number >> _raw_bits; // divid by 2^8 = 256
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return out;
}

// Comparison Operators
bool Fixed::operator>(const Fixed& n) const
{
	return _number > n._number; 
}

bool Fixed::operator<(const Fixed& n) const
{
	return _number < n._number;
}

bool Fixed::operator>=(const Fixed& n) const
{
	return _number >= n._number;
}

bool Fixed::operator<=(const Fixed& n) const
{
	return _number <= n._number;
}

bool Fixed::operator==(const Fixed& n) const
{
	return _number == n._number;
}

bool Fixed::operator!=(const Fixed& n) const
{
	return _number != n._number;
}

// Arithmetic Operators
Fixed Fixed::operator+(const Fixed& n) const
{
	return Fixed(this->toFloat() + n.toFloat());
}

Fixed Fixed::operator-(const Fixed& n) const
{
	return Fixed(this->toFloat() - n.toFloat());
}

Fixed Fixed::operator*(const Fixed& n) const
{
	return Fixed(this->toFloat() * n.toFloat());
}

Fixed Fixed::operator/(const Fixed& n) const
{
	int	diviser;

	diviser = n.toFloat();
	if (diviser == 0)
	{
		std::cout << "Error: Division by 0 forbidden."<<std::endl;
		return (-1);
	}
	return Fixed(this->toFloat() / n.toFloat());
}

// Incrementation / decrementation
Fixed& Fixed::operator++()
{
	_number++;
	return *this;
}

Fixed Fixed::operator++(int)
{ 
	Fixed tmp(*this);
	_number++;
	return tmp;
}

Fixed& Fixed::operator--()
{
	_number--;
	return *this;
}

Fixed Fixed::operator--(int)
{ 
	Fixed tmp(*this);
	_number--;
	return tmp;
}

// --- Fonctions min / max ---
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}
