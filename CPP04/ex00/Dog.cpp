/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:53:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/22 05:58:29 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

// Default constructor
Dog::Dog()
  : Animal() {
  this->type = "Dog";
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Copy constructor
Dog::Dog(const Dog& obj)
  : Animal(obj) {
  std::cout << "Copy constructor " << __func__ << "(" << obj.type << ") is called\n";
  *this = obj;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& obj) {
  std::cout << "Copy assignment operator (Dog) is called\n";
  if (this != &obj)
    this->type = obj.type;
  return *this;
}

// Destructor
Dog::~Dog() {
  std::cout << "Destructor " << __func__ << " is called\n";
}

void Dog::makeSound() const {
  std::cout << "Dog Dog!!\n";
}
