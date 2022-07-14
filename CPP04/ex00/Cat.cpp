/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:37:41 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 09:19:46 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

// Default constructor
Cat::Cat()
  : Animal() {
  this->type = "Cat";
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Copy constructor
Cat::Cat(const Cat& obj)
  : Animal(obj) {
  *this = obj;
  std::cout << "Copy constructor " << __func__ << "(" << this->type << ") is called\n";
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& obj) {
  std::cout << "Copy assignment operator (Cat) is called\n";
  this->type = obj.type;
  return *this;
}

// Destructor
Cat::~Cat() {
  std::cout << "Destructor " << __func__ << " is called\n";
}

void Cat::makeSound() const {
  std::cout << "Cat Cat!!\n";
}
