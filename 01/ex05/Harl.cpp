/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:09:28 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/27 16:27:39 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

const std::pair<std::string, Harl::HarlMemFn> Harl::levels[] = {
    std::pair<std::string, Harl::HarlMemFn>("debug", &Harl::debug),
    std::pair<std::string, Harl::HarlMemFn>("info", &Harl::info),
    std::pair<std::string, Harl::HarlMemFn>("warning", &Harl::warning),
    std::pair<std::string, Harl::HarlMemFn>("error", &Harl::error)
};

void Harl::complain(std::string level) 
{
    for (int i = 0; i < 4; ++i) {
        if (levels[i].first == level) {
            (this->*levels[i].second)();
            return;
        }
    }
    std::cout << "Invalid level" << std::endl;
}