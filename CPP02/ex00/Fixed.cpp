/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:30:05 by juhur             #+#    #+#             */
/*   Updated: 2022/06/19 04:29:42 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() {
  std::cout << "Default constructor is called\n";
  this->raw = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed& fixed) {
  std::cout << "Copy constructor is called\n";
  *this = fixed;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed) {
  std::cout << "Copy assignment operator is called\n";
  this->raw = fixed.getRawBits();
  return *this;
}

// Destructor
Fixed::~Fixed() {
  std::cout << "Destructor is called\n";
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return this->raw;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called\n";
  this->raw = raw;
}
