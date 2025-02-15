/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:05:55 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/27 16:24:17 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl = Harl();
    std::string input;

    std::cout << "Welcome to the Harl Complaints Department!" << std::endl;
    std::cout << "Enter your complaints.\nChoose between \033[1;33mdebug, info, warning, error\033[0m." << std::endl;
    std::cout << "Type '\033[1;31mexit\033[0m' to leave." << std::endl;

    while (true)
    {
        std::cout << "> ";
        std::getline(std::cin, input);

        if (input == "exit")
            break;

        harl.complain(input);
    }
    return 0;   
}