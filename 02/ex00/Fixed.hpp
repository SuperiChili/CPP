/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:35:30 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/01 13:43:18 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed(); //ok
        Fixed(const Fixed &other); //ok
        Fixed &operator = (const Fixed &other); //ok
        ~Fixed(); //ok
        int getRawBits( void ) const; //ok
        void setRawBits( int const raw ); //ok
};

#endif