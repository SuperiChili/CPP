/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:51:35 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/13 20:12:37 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

#include "../includes/WrongCat.hpp"


int main()
{
    //OK
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // std::cout << std::endl;
    // meta->makeSound();

    // delete i;
    // delete j;
    // delete meta;

    //WRONG TEST
    const WrongAnimal* w_animal = new WrongAnimal();
    const WrongAnimal* w_cat = new WrongCat();
    w_animal->makeSound();
    w_cat->makeSound();

    delete w_animal;
    delete w_cat;
    
    return 0;
}