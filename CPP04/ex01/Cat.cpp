/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:37:41 by juhur             #+#    #+#             */
/*   Updated: 2022/07/25 05:32:33 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

// Default constructor
Cat::Cat()
  : Animal() {
  this->type = "Cat";
  this->brain = new Brain();
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Constructor
Cat::Cat(std::string idea)
  : Animal() {
  std::cout << "Constructor " << __func__ << "(" << idea << ") is called\n";
  this->type = "Cat";
  this->brain = new Brain(idea);
}

// Copy constructor
Cat::Cat(const Cat& obj)
  : Animal(obj) {
  std::cout << "Copy constructor " << __func__ << "(" << obj.type << ") is called\n";
  *this = obj;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& obj) {
  std::cout << "Copy assignment operator (Cat) is called\n";
  if (this != &obj) {
    this->type = obj.type;
    if (this->brain != NULL)
      delete this->brain;
    this->brain = new Brain(*obj.brain);
  }
  return *this;
}

// Destructor
Cat::~Cat() {
  delete this->brain;
  std::cout << "Destructor " << __func__ << " is called\n";
}

// Getter
Brain* Cat::getBrain() const {
  return this->brain;
}

void Cat::makeSound() const {
  std::cout << "Cat Cat!!\n";
}
