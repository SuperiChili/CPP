/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:46:44 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/13 19:56:39 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "😺 default constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    this->_type = src._type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    this->_type = src._type;
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "😺 🔉 Meow meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
