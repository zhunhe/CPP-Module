/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:25:47 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 09:19:41 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

// Default constructor
Animal::Animal()
  : type("Animal") {
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Copy constructor
Animal::Animal(const Animal& obj) {
  *this = obj;
  std::cout << "Copy constructor " << __func__ << "(" << this->type << ") is called\n";
}

// Copy assignment operator
Animal& Animal::operator=(const Animal& obj) {
  std::cout << "Copy assignment operator (Animal) is called\n";
  this->type = obj.type;
  return *this;
}

// Destructor
Animal::~Animal() {
  std::cout << "Destructor " << __func__ << "(" << this->type << ") is called\n";
}

const std::string& Animal::getType() const {
  return this->type;
}

void Animal::makeSound() const {
  std::cout << "Animal Animal!!\n";
}
