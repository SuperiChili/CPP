/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:40:54 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/15 19:46:54 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "General Animal";
    std::cout << "-- default constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    this->_type = src._type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    this->_type = src._type;
    std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "No 😶 sound. I'm an animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}