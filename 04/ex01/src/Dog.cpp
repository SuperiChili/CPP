/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:50:54 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/15 20:09:40 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "🐶 default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    this->_brain = new Brain(*src._brain);
    this->_type = src._type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        Animal::operator=(src);
        this->_type = src._type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*src._brain);
    }
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

void Dog::setIdea(int i, std::string idea)
{
    if (this->_brain)
        this->_brain->setIdea(i, idea);
}

std::string Dog::getIdea(int i) const
{
    if (this->_brain)
        return this->_brain->getIdea(i);
    return "";
}

void Dog::makeSound() const
{
    std::cout << "🐶 🔉 Woof woof" << std::endl;
}

Dog::~Dog()
{
    if (this->_brain)
        delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}
