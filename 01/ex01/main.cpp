/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 19:22:47 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/19 18:23:26 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
int main() {
    int N;
    std::string name;

    std::cout << "How many zombies do you want to create? ";
    std::cin >> N;
    std::cout << "What should be the name of the zombies? ";
    std::cin >> name;

    Zombie* horde = zombieHorde(N, name);
    if (horde != nullptr)
    {
        for (int i = 0; i < N; ++i) 
        {
            horde[i].announce();
        }
        delete[] horde;
    }
    else 
    {
        std::cout << "Failed to create zombie horde." << std::endl;
    }

    return 0;
}