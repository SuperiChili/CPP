/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyCharacter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:43:41 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 22:11:48 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MYCHARACTER_HPP
# define MYCHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class MyCharacter : public ICharacter
{
    public:
        MyCharacter();
        MyCharacter(const MyCharacter &src);
        MyCharacter &operator=(const MyCharacter &src);
        virtual ~MyCharacter();
        
        MyCharacter(std::string const &name);
        std::string const &getName() const;
        void equip(AMateria* m); //manca
        void unequip(int idx); //manca
        void use(int idx, ICharacter &target); //manca
};

#endif