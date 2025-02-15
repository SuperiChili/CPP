/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:26:40 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/13 20:46:53 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    protected:
        static const int  _nr = 100;
        std::string _ideas[_nr];
    public:
        Brain();
        Brain(Brain const &src);
        virtual ~Brain();
        Brain &operator=(Brain const &other);
        void setIdea(int i, std::string idea);
        std::string getIdea(int i) const;
};

#endif