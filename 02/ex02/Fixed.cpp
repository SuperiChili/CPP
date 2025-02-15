/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:53:40 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/04 19:49:12 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() 
{
    value = 0;
    if (DEBUG)
        std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int int_nr)
{
    value = int_nr << bits;
    if (DEBUG)
        std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (const float float_nr)
{
    value = roundf(float_nr * (1 << bits));
    if (DEBUG)
        std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed (const Fixed &other)
{
    if (this != &other)
    {
        if (DEBUG)
            std::cout << "Copy constructor called" << std::endl;
        *this = other;
    }
    else
    std::cout << "Copy constructor called but Classes are the same; " << std::endl;
}

Fixed::~Fixed()
{
    if (DEBUG)
        std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return (float)value / (1 << bits);
}

int Fixed::toInt(void) const
{
    return value >> bits;
}

int Fixed::getRawBits( void ) const
{
    if (DEBUG)
        std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    this->value = raw;
    if (DEBUG)
        std::cout << "setRawBits member function called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        value = other.value;
    }
    if (DEBUG)
        std::cout << "Copy assignment operator called" << std::endl;
    return *this; 
}

bool Fixed::operator<(const Fixed &other)
{
    return (this->value < other.value);
}

bool Fixed::operator>(const Fixed &other)
{
    return (this->value > other.value);
}

bool Fixed::operator<=(const Fixed &other)
{
    return (this->value <= other.value);
}

bool Fixed::operator>=(const Fixed &other)
{
    return (this->value >= other.value);
}

bool Fixed::operator!=(const Fixed &other)
{
 
    return (this->value != other.value);
}

bool Fixed::operator==(const Fixed &other)
{
    return (this->value == other.value);
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed result;   
    result.value = this->value + other.value; 
    return result;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed result;
    result.value = this->value - other.value;
    return result;
}

//TO FIIIIX
Fixed Fixed::operator*(const Fixed &other)
{
    Fixed result;
    result.value = (this->value * other.value) >> bits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other)
{
    if (other.value == 0)
    {
        throw std::runtime_error("Division by zero");
    }
    Fixed result;
    result.value = (this->value << bits) / other.value;
    return result;
}

//PREincrement 
Fixed &Fixed::operator++(void)
{
    ++value;
    return *this;
}

//POSTincrement
Fixed Fixed::operator++(int)
{
    Fixed prev = *this;
    this->value = this->value + 1;
    return prev;
}
//change to type FIXED not FLOAT
Fixed Fixed::max(Fixed &a, Fixed &b)
{
    //std::cout << "NOT const" << std::endl;
    if (a.toFloat() > b.toFloat())
        return a;
    return b;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
    //std::cout << "CONST" << std::endl;
    if (a.toFloat() > b.toFloat())
        return a;
    return b;
}

Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() < b.toFloat())
        return a;
    return b;
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return a;
    return b;
}


