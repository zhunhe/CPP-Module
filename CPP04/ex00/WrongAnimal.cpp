/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:27:09 by juhur             #+#    #+#             */
/*   Updated: 2022/07/22 10:37:37 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal()
  : type("WrongAnimal") {
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
  std::cout << "Copy constructor " << __func__ << "(" << obj.type << ") is called\n";
  *this = obj;
}

// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
  std::cout << "Copy assignment operator (WrongAnimal) is called\n";
  if (this != &obj)
    this->type = obj.type;
  return *this;
}

// Destructor
WrongAnimal::~WrongAnimal() {
  std::cout << "Destructor " << __func__ << "(" << this->type << ") is called\n";
}

const std::string& WrongAnimal::getType() const {
  return this->type;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal WrongAnimal!!\n";
}
