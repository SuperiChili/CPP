/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:28:31 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/15 20:22:41 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(Cat const &src);
        virtual ~Cat();
        Cat &operator=(Cat const &other);
        void setIdea(int i, const std::string idea);
        std::string getIdea(int i) const;
        virtual void makeSound() const;
};

#endif