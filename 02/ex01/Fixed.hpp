/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:44:25 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/01 13:44:59 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"

class Fixed
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed (void); 
        Fixed (const int int_nr);
        Fixed (const float float_nr); 
        Fixed(const Fixed &other); 
        ~Fixed (void); 
        float toFloat( void ) const; 
        int toInt( void ) const; 
        Fixed &operator = (const Fixed &other); 
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed); 

#endif