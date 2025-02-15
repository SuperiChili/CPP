/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:46:44 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/15 20:09:42 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "😺 default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    this->_type = src._type;
    this->_brain = new Brain(*src._brain); 
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        Animal::operator=(src); // are you sure?
        this->_type = src._type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*src._brain); // Deep copy
    }
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}


void Cat::setIdea(int index, const std::string idea)
{
    if (this->_brain)
    this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    if (this->_brain)
    return this->_brain->getIdea(index);
    return "";
}

void Cat::makeSound() const
{
    std::cout << "😺 🔉 Meow meow" << std::endl;
}

Cat::~Cat()
{
    if (this->_brain)
        delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}
