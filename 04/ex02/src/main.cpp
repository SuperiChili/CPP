/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:51:35 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/15 20:32:20 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"


int main()
{
    //Animal wrongAnimal;
    // wrongAnimal.makeSound();
    // Test ONE
    int nr = 10;
    Animal *animals[nr];
    
    for (int i = 0; i < nr / 2; i++)
    {
        animals[i] = new Dog();
    }

    for (int i = nr / 2; i < nr; i++)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < nr; i++)
    {
        animals[i]->makeSound();
    }

    // Test TWO: deep copy
    // Dog originalDog;
    // originalDog.setIdea(0, "Chase the cat");
    // Dog copiedDog = originalDog;

    // std::cout << "Original Dog idea: " << originalDog.getIdea(0) << std::endl;
    // std::cout << "Copied Dog idea: " << copiedDog.getIdea(0) << std::endl;

    // originalDog.setIdea(0, "Sleep all day");

    // std::cout << "Modified Original Dog idea: " << originalDog.getIdea(0) << std::endl;
    // std::cout << "Copied Dog idea after modification: " << copiedDog.getIdea(0) << std::endl;
    
    //FREE / DELETE
    for (int i = 0; i < nr; i++)
    {
        delete animals[i];
    }
    return 0;
}