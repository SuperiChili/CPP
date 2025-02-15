/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:11:35 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/18 18:59:01 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie {
private:
    std::string Name;
public:
    Zombie(std::string name) : Name(name) {}
    ~Zombie() {
        std::cout << Name << " is destroyed" << std::endl;
    }
    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif