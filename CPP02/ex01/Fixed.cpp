/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:00:05 by juhur             #+#    #+#             */
/*   Updated: 2022/06/17 12:23:51 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->fixedNumber = 0;
}

Fixed::Fixed(const int fixedNumber) {
	std::cout << "Int constructor called\n";
	this->fixedNumber = fixedNumber << this->fractionalPartLength;
}

Fixed::Fixed(const float fixedNumber) {
	std::cout << "Float constructor called\n";
	this->fixedNumber = roundf(fixedNumber * (1 << this->fractionalPartLength));
}

// Copy constructor
Fixed::Fixed(const Fixed& fixed) {
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed) {
	std::cout << "Copy assignment operator called\n";
	this->fixedNumber = fixed.fixedNumber;
	return *this;
}

// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

float Fixed::toFloat(void) const {
	return static_cast<float>(this->fixedNumber) / static_cast<float>(1 << this->fractionalPartLength);
}

int Fixed::toInt(void) const {
	return this->fixedNumber >> this->fractionalPartLength;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
