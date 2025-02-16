/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:49:58 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 20:57:41 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &src);
        Cure &operator=(const Cure &src);
        virtual ~Cure();
        
        Cure(std::string const &type);
        AMateria* clone() const;
        void use(ICharacter &target);
};

#endif
