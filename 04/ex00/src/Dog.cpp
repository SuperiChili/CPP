/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:50:54 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/13 19:56:39 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "🐶 default constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
    this->_type = src._type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    this->_type = src._type;
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "🐶 🔉 Woof woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
