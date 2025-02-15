/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:54:13 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/19 19:05:43 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "String:    " << str << std::endl;
    std::cout << "Pointer:   " << *stringPTR << std::endl;
    std::cout << "Reference: " << stringREF << std::endl;

    std::cout << "Adress of string:     " << &str << std::endl;
    std::cout << "Adress of stringPTR:  " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;
    return 0;
}