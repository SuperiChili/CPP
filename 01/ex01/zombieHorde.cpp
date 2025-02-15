/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 19:27:27 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/18 19:30:55 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) 
{
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) 
    {
        horde[i].setName(name);
    }
    return horde;
}