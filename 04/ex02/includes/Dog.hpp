/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:36:55 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/15 20:22:28 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(Dog const &src);
        virtual ~Dog();
        Dog &operator=(Dog const &other);
        void setIdea(int i, std::string idea);
        std::string getIdea(int i) const;
        virtual void makeSound() const;
};

#endif
