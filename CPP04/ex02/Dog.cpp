/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:53:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 12:29:22 by juhur            ###   ########.fr       */
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
  std::cout << "Copy constructor " << __func__ << "(" << type << ") is called\n";
  this->brain = new Brain();
  *this = obj;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& obj) {
  std::cout << "Copy assignment operator (Dog) is called\n";
  this->type = obj.type;
  *(this->brain) = *(obj.brain);
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
