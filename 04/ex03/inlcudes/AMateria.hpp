/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:08:14 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 20:36:06 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"
# define DEBUG 0
# define INFO 0

class AMateria
{
    public:
        AMateria();
        AMateria(const AMateria &src);
        AMateria &operator=(const AMateria &src);
        virtual ~AMateria();
        
        AMateria(std::string const &type);
        std::string const &getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
        
    protected:
        std::string _type;
};

#endif