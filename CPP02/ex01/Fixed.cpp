/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:00:05 by juhur             #+#    #+#             */
/*   Updated: 2022/06/19 04:35:33 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() {
  std::cout << "Default constructor called\n";
  this->raw = 0;
}

Fixed::Fixed(const int raw) {
  std::cout << "Int constructor called\n";
  this->raw = raw << this->fractionalBit;
}

Fixed::Fixed(const float raw) {
  std::cout << "Float constructor called\n";
  this->raw = roundf(raw * (1 << this->fractionalBit));
}

// Copy constructor
Fixed::Fixed(const Fixed& fixed) {
  std::cout << "Copy constructor called\n";
  *this = fixed;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed) {
  std::cout << "Copy assignment operator called\n";
  this->raw = fixed.raw;
  return *this;
}

// Destructor
Fixed::~Fixed() {
  std::cout << "Destructor called\n";
}

float Fixed::toFloat(void) const {
  return static_cast<float>(this->raw) / static_cast<float>(1 << this->fractionalBit);
}

int Fixed::toInt(void) const {
  return this->raw >> this->fractionalBit;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}
