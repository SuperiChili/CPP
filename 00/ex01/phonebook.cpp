/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:34:26 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/19 18:03:13 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact(const Contact &contact) {
    if (contactCount < 8) {
        contacts[contactCount] = contact;
        contactCount++;
    } else {
        for (int i = 1; i < 8; i++) {
            contacts[i - 1] = contacts[i];
        }
        contacts[7] = contact;
    }
}

void PhoneBook::displayContacts() const 
{
    const std::string green = "\033[32m";
    const std::string reset = "\033[0m";

    std::cout << green
              << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << reset << std::endl;

    for (int i = 0; i < contactCount; i++) 
    {
        std::cout << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|"
                  << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|"
                  << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) << std::endl;
    }
}

void PhoneBook::displayContactDetails(int index, int *flag, std::istream &input) const 
{
    if (input.eof()) 
    {
        std::cout << "End of input detected. Exiting program." << std::endl;
        *flag = 0;
        return ;
    }
    if (index < 0 || index >= contactCount) 
    {
        std::cout << "Index not in phonebok" << std::endl;
        return ;
    }
    const Contact &contact = contacts[index];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}