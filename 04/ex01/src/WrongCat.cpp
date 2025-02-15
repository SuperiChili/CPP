/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:01:59 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/13 20:09:11 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->_type = "Wrong Cat";
    std::cout << "😾 default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    this->_type = src._type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    this->_type = src._type;
    std::cout << "WrongCat assignation operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "😾 🔉 Meow meow" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

