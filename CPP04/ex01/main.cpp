/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:16:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/25 05:43:32 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  {
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    delete j;
    delete i;
  }
  std::cout << "--------------------\n";
  {
    Dog dog1;
    Dog dog2(dog1);
  }
  std::cout << "--------------------\n";
  {
    Cat* cat1 = new Cat();
    Cat* cat2 = new Cat();

    *cat1 = *cat2;

    delete cat2;
    delete cat1;
  }
  std::cout << "--------------------\n";
  {
    int animalCount = 10;
    Animal* animals[animalCount];

    for (int i = 0; i < animalCount / 2; i++)
      animals[i] = new Cat();
    for (int i = animalCount / 2; i < animalCount; i++)
      animals[i] = new Dog();

    for (int i = 0; i < animalCount; i++)
      delete animals[i];
  }
  std::cout << "--------------------\n";
  {
    Cat* cat1 = new Cat("cat's idea");
    cat1->getBrain()->printIdeas();

    delete cat1;
  }
}
