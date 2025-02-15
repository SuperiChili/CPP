/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:12:35 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/04 19:45:00 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    // Fixed x;
    // std::cout << x.getRawBits()<< std::endl;
    Fixed zero;
    Fixed one(1);
    Fixed neg(-4.12f);
    Fixed pos(4.9f);
    // Fixed b(a);
    // const Fixed c(3.12f);
    

    // Fixed c;
    // float res = c.max(a,b);
    // std::cout << res << std::endl;
    // std::cout << a.getFractionalBites() << std::endl;
    //std::cout << Fixed::max(a,c) << std::endl;
    //std::cout << Fixed::max(c,a) << std::endl;
    // std::cout << "A = " << a.toFloat() << std::endl;
    // std::cout << "D = " << d.toFloat() << std::endl;
    // std::cout << (a >= d ? "A" : "D") << std::endl;
    
    //std::cout << "sum is " << sum << std::endl;
    //a.getFixedPointValue();
    //std::cout << Fixed::min(a,c) << std::endl;
    // int first = a.toInt();
    // int second = b.toInt();
    // if (first < second)
    //     std::cout << "A minore di B" << std::endl;
    // std::cout << (a < d ? "a is smaller" : "b is smaller") << std::endl;  
    
    // std::cout << one.getRawBits() << std::endl;
    // one++;
    // one++;
    // std::cout << one.getRawBits() << std::endl;
    // ++zero;
    // std::cout << zero.getRawBits() << std::endl;
    
    //OFFICIAL TEST
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(6.5f);
    Fixed d(0);
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "\033[32mMine\033[0m" << std::endl;
    Fixed res(Fixed( 7 ) / Fixed ( 3 ));
    std::cout << res << std::endl;
    try
    {
        Fixed resZero(Fixed( 6 ) / Fixed ( 0 ));
        std::cout << resZero << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "c + d = " << c + d << std::endl;
    std::cout << "c * d = " << c * d << std::endl;

    return (0);
}