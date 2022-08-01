/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:32:24 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 04:34:27 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include "Convert.hpp"
#include "detectType.hpp"

// Default constructor
Convert::Convert()
  : raw("")
  , type(TYPE_ERROR)
  , c(0)
  , c_overflow(false)
  , i(0)
  , f(0.0f)
  , d(0.0) {
  // std::cout << "Default constructor " << __func__ << " is called" << std::endl;
  this->type = detectType(raw);
  this->convertToActualType();
  this->convertToOtherType();
}

// Constructor
Convert::Convert(std::string raw)
  : raw(raw)
  , type(TYPE_ERROR)
  , c(0)
  , c_overflow(false)
  , i(0)
  , f(0.0f)
  , d(0.0) {
  // std::cout << "Constructor " << __func__ << " is called" << std::endl;
  this->type = detectType(raw);
  this->convertToActualType();
  this->convertToOtherType();
}

// Copy constructor
Convert::Convert(const Convert& obj) {
  // std::cout << "Copy constructor " << __func__ << " is called" << std::endl;
  *this = obj;
}

// Copy assignment operator
Convert& Convert::operator=(const Convert& obj) {
  // std::cout << "Copy assignment operator is called" << std::endl;
  if (this != &obj) {
    this->raw = obj.raw;
    this->type = obj.type;
    this->c = obj.c;
    this->c_overflow = obj.c_overflow;
    this->i = obj.i;
    this->f = obj.f;
    this->d = obj.d;
  }
  return *this;
}

// Destructor
Convert::~Convert() {
  // std::cout << "Destructor " << __func__ << " is called" << std::endl;
}

void Convert::convertToActualType() {
  switch (this->type) {
  case TYPE_CHAR:
    if (this->raw.length() == 1)  // a
      this->c = this->raw[0];
    else  // 'a'
      this->c = this->raw[1];
    break;
  case TYPE_INT:    this->i = strtol(this->raw.c_str(), NULL, 10);                 break;
  case TYPE_FLOAT:  this->f = static_cast<float>(strtod(this->raw.c_str(), NULL)); break;
  case TYPE_DOUBLE: this->d = strtod(this->raw.c_str(), NULL);                     break;
  }
}

void Convert::convertToOtherType() {
  switch (this->type) {
  case TYPE_CHAR:
    this->i = static_cast<long>(this->c);
    this->f = static_cast<float>(this->c);
    this->d = static_cast<double>(this->c);
    break;
  case TYPE_INT:
    if (!isascii(static_cast<int>(this->i)))
      this->c_overflow = true;
    else
      this->c = static_cast<char>(this->i);
    this->f = static_cast<float>(this->i);
    this->d = static_cast<double>(this->i);
    break;
  case TYPE_FLOAT:
    if (!isascii(static_cast<int>(this->f)))
      this->c_overflow = true;
    else
      this->c = static_cast<char>(this->f);
    this->i = static_cast<long>(this->f);
    this->d = static_cast<double>(this->f);
    break;
  case TYPE_DOUBLE:
    if (!isascii(static_cast<int>(this->d)))
      this->c_overflow = true;
    else
      this->c = static_cast<char>(this->d);
    this->i = static_cast<long>(this->d);
    this->f = static_cast<float>(this->d);
    break;
  }
}

// Print function
void Convert::printAll() {
  printChar();
  printInt();
  printFloat();
  printDouble();
}

void Convert::printChar() {
  std::cout << "char: ";
  if (this->type == TYPE_ERROR || this->type == TYPE_INT_OVERFLOW || this->c_overflow)
    std::cout << "impossible";
  else if (!isprint(this->c))
    std::cout << "Non displayable";
  else
    std::cout << '\'' << this->c << '\'';
  std::cout << std::endl;
}

void Convert::printInt() {
  std::cout << "int: ";
  if ((this->type == TYPE_ERROR || this->type == TYPE_INT_OVERFLOW)
  || (this->i > std::numeric_limits<int>::max())
  || (this->i < std::numeric_limits<int>::min()))
    std::cout << "impossible";
  else
    std::cout << static_cast<int>(this->i);
  std::cout << std::endl;
}

void Convert::printFloat() {
  std::cout << "float: ";
  if (this->type == TYPE_ERROR || this->type == TYPE_INT_OVERFLOW)
    std::cout << "impossible";
  else
    std::cout << std::fixed << std::setprecision(1) << this->f << "f";
  std::cout << std::endl;
}

void Convert::printDouble() {
  std::cout << "double: ";
  if (this->type == TYPE_ERROR || this->type == TYPE_INT_OVERFLOW)
    std::cout << "impossible";
  else
    std::cout << std::fixed << std::setprecision(1) << this->d;
  std::cout << std::endl;
}
