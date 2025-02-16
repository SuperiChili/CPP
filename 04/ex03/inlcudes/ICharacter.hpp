/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:21:25 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 22:11:26 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# define DEBUG_CHAR 0
# define INFO_CHAR 0

class ICharacter
{
    protected:
        static const size_t INVENTORY_SIZE = 4; 
        std::string _name;
        AMateria *_inventory[INVENTORY_SIZE];
        //unsigned int _inventoryIdx;
    public:
        // ICharacter();
        // ICharacter(const ICharacter &src);
        // ICharacter &operator=(const ICharacter &src);
        virtual ~ICharacter() {};
        
        virtual std::string const &getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter &target) = 0;

    
};

#endif