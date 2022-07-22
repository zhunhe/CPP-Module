/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:53:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 03:11:03 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

// Default constructor
Dog::Dog()
  : Animal() {
  this->type = "Dog";
  this->brain = new Brain();
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
  if (this != &obj) {
    this->type = obj.type;
    if (this->brain != NULL)
      delete this->brain;
    this->brain = new Brain(*obj.brain);
  }
  return *this;
}

// Destructor
Dog::~Dog() {
  delete this->brain;
  std::cout << "Destructor " << __func__ << " is called\n";
}

void Dog::makeSound() const {
  std::cout << "Dog Dog!!\n";
}
