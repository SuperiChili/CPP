/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:48:35 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/15 20:30:02 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(Animal const &src);
        virtual ~Animal();
        Animal &operator=(Animal const &other);
        std::string getType() const;
        
        virtual void makeSound() const = 0; 
};

#endif
