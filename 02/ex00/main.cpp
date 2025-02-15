/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:56:42 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/01 17:20:09 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
    Fixed a;
    //a.setRawBits(42);
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    //a.setRawBits(-1);
    
    // c = a;
    // std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    // std::cout << c.getRawBits() << std::endl;
    return 0;    

}   