/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 19:24:29 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/19 18:26:04 by rpaic            ###   ########.fr       */
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
    Zombie() : Name("") {}
    void setName(std::string name) { this->Name = name; }
    void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif