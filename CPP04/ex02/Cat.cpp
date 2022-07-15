/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:37:41 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 12:17:34 by juhur            ###   ########.fr       */
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

// Copy constructor
Cat::Cat(const Cat& obj)
  : Animal(obj) {
  this->brain = new Brain();
  *this = obj;
  std::cout << "Copy constructor " << __func__ << "(" << this->type << ") is called\n";
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& obj) {
  std::cout << "Copy assignment operator (Cat) is called\n";
  this->type = obj.type;
  *(this->brain) = *(obj.brain);
  return *this;
}

// Destructor
Cat::~Cat() {
  delete this->brain;
  std::cout << "Destructor " << __func__ << " is called\n";
}

void Cat::makeSound() const {
  std::cout << "Cat Cat!!\n";
}
