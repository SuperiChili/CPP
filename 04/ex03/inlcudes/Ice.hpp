/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:27:04 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 20:20:49 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &src);
        Ice &operator=(const Ice &src);
        virtual ~Ice();
        
        Ice(std::string const &type);
        AMateria* clone() const;
        void use(ICharacter &target);
};

#endif