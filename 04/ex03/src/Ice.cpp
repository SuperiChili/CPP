/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:26:36 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 20:40:42 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    if (DEBUG)
        std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
    if (DEBUG)
        std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
    *this = src;
    if (INFO)
        std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    if (INFO)
        std::cout << "Ice assignation operator called" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    if (DEBUG)
        std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    Ice *newIce = new Ice(*this);
    return (newIce);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

