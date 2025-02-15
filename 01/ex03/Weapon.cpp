/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:36:17 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/23 21:49:43 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

//constructor                                memeber initializer list
Weapon::Weapon(const std::string &thetype) : type(thetype) 
{
    std::cout << "Weapon created: " << type << std::endl;    
}

const std::string &Weapon::getType(void) const 
{
    return type;
}

void Weapon::setType(const std::string &newType) 
{
    type = newType;
}
