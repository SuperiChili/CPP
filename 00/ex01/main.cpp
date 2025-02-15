/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:24:42 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/19 18:02:32 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <limits> 
#include <cstdlib> 

bool isValidInput(const std::string &str) 
{
    std::string::const_iterator it;
    
    if (str.empty())
        return false;
    for (it = str.begin(); it != str.end(); ++it)
    {
        if (*it >= 32 && *it <= 126)
            return true;
    }
    return false;
}

int check_input(std::istream &input, const std::string &str) 
{
    if (input.eof()) 
    {
        std::cout << "End of input detected. Exiting program." << std::endl;
        exit(1);
        return (1);
    }
    if (!isValidInput(str))
    {
        std::cout << "All fields must be filled with at least one printable character." << std::endl;
        return 1;
    }
    return 0;
}

int main() 
{
    PhoneBook phoneBook;
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
    std::string command;
    int flag = 1;

    while (flag) 
    {

        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (std::cin.eof()) 
        {
            std::cout << "End of input detected. Exiting program." << std::endl;
            return (1);
        }
        if (command == "ADD") 
        {
            std::cout << "Enter first name: ";
            std::cin.ignore();
            std::getline(std::cin, firstName);
            if (check_input(std::cin, firstName))
                continue;
            std::cout << "Enter last name: ";
            std::getline(std::cin, lastName);
            if (check_input(std::cin, lastName))
                continue;
            std::cout << "Enter nickname: ";
            std::getline(std::cin, nickname);
            if (check_input(std::cin, nickname))
                continue;
            std::cout << "Enter phone number: ";
            std::getline(std::cin, phoneNumber);
            if (check_input(std::cin, phoneNumber))
                continue;
            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, darkestSecret);
            if (check_input(std::cin, darkestSecret))
                continue;

            Contact contact;
            contact.setFirstName(firstName);
            contact.setLastName(lastName);
            contact.setNickname(nickname);
            contact.setPhoneNumber(phoneNumber);
            contact.setDarkestSecret(darkestSecret);

            phoneBook.addContact(contact);
        }
        else if (command == "SEARCH")
        {
            phoneBook.displayContacts();
            std::cout << "Enter index of contact to display: ";
            int index;
            while (!std::cin.eof() && !(std::cin >> index)) 
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid index: ";
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            phoneBook.displayContactDetails(index - 1, &flag, std::cin);
        } 
        else if (command == "EXIT") 
        {
            break;
        } 
        else 
        {
            std::cout << "Invalid command." << std::endl;
        }
    }
    return 0;
}