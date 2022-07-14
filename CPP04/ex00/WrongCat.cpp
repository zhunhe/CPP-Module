/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:29:27 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 09:30:10 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat()
  : WrongAnimal() {
  this->type = "WrongCat";
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& obj)
  : WrongAnimal(obj) {
  *this = obj;
  std::cout << "Copy constructor " << __func__ << "(" << this->type << ") is called\n";
}

// Copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& obj) {
  std::cout << "Copy assignment operator (WrongCat) is called\n";
  this->type = obj.type;
  return *this;
}

// Destructor
WrongCat::~WrongCat() {
  std::cout << "Destructor " << __func__ << " is called\n";
}

void WrongCat::makeSound() const {
  std::cout << "WrongCat WrongCat!!\n";
}
