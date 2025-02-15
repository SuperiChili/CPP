/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:53:40 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/31 18:47:03 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() 
{
    _fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int int_nr)
{
    _fixedPointValue = int_nr << _fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (const float float_nr)
{
    _fixedPointValue = roundf(float_nr * (1 << _fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed (const Fixed &other)
{
    if (this != &other)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = other;
    }
    else
    std::cout << "Copy constructor called but Classes are the same; " << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return (float)_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
    return _fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}

Fixed &Fixed::operator=(Fixed const &other)
{
    if (this != &other)
    {
        _fixedPointValue = other._fixedPointValue;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this; 
}

