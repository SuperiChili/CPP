/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:11 by rpaic             #+#    #+#             */
/*   Updated: 2024/11/19 17:18:59 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) 
{
    if (argc == 1) 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    size_t till;
    for (int i = 1; i < argc; ++i) 
    {
        std::string arg = argv[i];
        till = arg.size();
        for (size_t j = 0; j < till; ++j) 
        {
            if (std::islower(arg[j]))
                arg[j] = std::toupper(arg[j]);
        }
        std::cout << arg;
    }
    std::cout << std::endl;
    return 0;
}