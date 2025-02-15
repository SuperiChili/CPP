/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:28:49 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/13 20:53:23 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "🧠 constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(Brain const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < _nr; i++)
        this->_ideas[i] = other._ideas[i];
    }
    std::cout << "Brain assignation operator called" << std::endl;
    return *this;
}

void Brain::setIdea(int i, std::string idea)
{
    if (i >= 0 && i < _nr)
        this->_ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
    if (i >= 0 && i < _nr)
        return this->_ideas[i];
    return "";
}

Brain::~Brain()
{
    std::cout << "🧠 destructor called" << std::endl;
}