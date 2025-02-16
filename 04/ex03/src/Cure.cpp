/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:26:47 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 21:02:17 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    if (DEBUG)
        std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
    if (DEBUG)
        std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src)
{
    *this = src;
    if (INFO)
        std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    if (INFO)
        std::cout << "Cure assignation operator called" << std::endl;
    return (*this);
}

Cure::~Cure()
{
    if (DEBUG)
        std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    Cure *newCure = new Cure(*this);
    return (newCure);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
