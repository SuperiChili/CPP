/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:07:58 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 20:35:52 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inlcudes/AMateria.hpp"

AMateria::AMateria() : _type("default")
{
    if (DEBUG)
        std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
    if (DEBUG)
        std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
    if (INFO)
        std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    if (INFO)
        std::cout << "AMateria assignation operator called" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    if (DEBUG)
        std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (_type);
}
//The & in the return type means that the method returns a reference, not a copy.
//Returning a reference is more efficient and avoids unnecessary copying.
//The const ensures that the returned reference cannot be used to modify the _type member.

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria " << getType << " used on " << target.getName() << std::endl;
}
