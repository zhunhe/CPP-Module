/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:51:08 by juhur             #+#    #+#             */
/*   Updated: 2022/07/13 05:40:11 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() {
  this->raw = 0;
}

// constructor
Fixed::Fixed(int raw) {
  this->raw = raw << this->fractionalBit;
}

Fixed::Fixed(float raw) {
  this->raw = roundf(raw * (1 << this->fractionalBit));
}

// Copy constructor
Fixed::Fixed(const Fixed& fixed) {
  *this = fixed;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed) {
  this->raw = fixed.raw;
  return *this;
}

// Destructor
Fixed::~Fixed() {}

// comparison operator
bool Fixed::operator<(const Fixed& b) const { return this->raw < b.raw; }
bool Fixed::operator>(const Fixed& b) const { return this->raw > b.raw; }
bool Fixed::operator<=(const Fixed& b) const { return this->raw <= b.raw; }
bool Fixed::operator>=(const Fixed& b) const { return this->raw >= b.raw; }
bool Fixed::operator==(const Fixed& b) const { return this->raw == b.raw; }
bool Fixed::operator!=(const Fixed& b) const { return this->raw != b.raw; }

// arithmetic operator
Fixed Fixed::operator+(const Fixed& b) {
  this->raw += b.raw;
  return *this;
}

Fixed Fixed::operator-(const Fixed& b) {
  this->raw -= b.raw;
  return *this;
}

Fixed Fixed::operator*(const Fixed& b) {
  this->raw = this->raw * b.raw / (1 << this->fractionalBit);
  return *this;
}

Fixed Fixed::operator/(const Fixed& b) {
  if (b.raw == 0)
    throw b;
  this->raw = this->raw / b.raw * (1 << this->fractionalBit);
  return *this;
}

// in[de]crement operator
Fixed& Fixed::operator++(void) { this->raw += 1; return *this; }
Fixed& Fixed::operator--(void) { this->raw -= 1; return *this; }
Fixed Fixed::operator++(int) { Fixed ret = *this; this->raw += 1; return ret; }
Fixed Fixed::operator--(int) { Fixed ret = *this; this->raw -= 1; return ret; }

int Fixed::toInt(void) const {
  return this->raw >> this->fractionalBit;
}

float Fixed::toFloat(void) const {
  return static_cast<float>(this->raw) / (1 << this->fractionalBit);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
  return a.raw < b.raw ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  return a.raw < b.raw ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  return a.raw > b.raw ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  return a.raw > b.raw ? a : b;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}
