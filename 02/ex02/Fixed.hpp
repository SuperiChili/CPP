/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:44:25 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/04 19:49:42 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#define DEBUG 0
#define CONSTRUCT 0
class Fixed
{
    private:
        int value;
        static const int bits = 8;
    public:
        Fixed (void); 
        Fixed (const int int_nr);
        Fixed (const float float_nr); 
        Fixed(const Fixed &other); 
        ~Fixed (void); 
        float toFloat( void ) const; 
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed &operator = (const Fixed &other);
        bool operator < (const Fixed &other);
        bool operator > (const Fixed &other);
        bool operator >= (const Fixed &other);
        bool operator <= (const Fixed &other);
        bool operator == (const Fixed &other);
        bool operator != (const Fixed &other);
        Fixed operator + (const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);
        Fixed &operator++(void);
        Fixed operator++(int);

        static Fixed max(Fixed &a, Fixed &b);
        static Fixed max(const Fixed &a, const Fixed &b);
        static Fixed min(const Fixed &a, const Fixed &b);
        static Fixed min(Fixed &a, Fixed &b);
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed); 

#endif