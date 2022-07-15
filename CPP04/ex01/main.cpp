/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:16:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 12:32:48 by juhur            ###   ########.fr       */
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
}