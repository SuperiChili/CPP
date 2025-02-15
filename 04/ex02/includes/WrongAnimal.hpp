/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:09:43 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/13 20:20:36 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &src);
        virtual ~WrongAnimal(); //no virtual -> memory leak
        WrongAnimal &operator=(WrongAnimal const &other);
        std::string getType() const;
        void makeSound() const; // Not virtual

    protected:
        std::string _type;
};

#endif