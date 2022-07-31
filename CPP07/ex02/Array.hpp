/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 07:17:52 by juhur             #+#    #+#             */
/*   Updated: 2022/07/31 07:25:09 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07_EX02_ARRAY_HPP_
#define CPP07_EX02_ARRAY_HPP_

#include <limits>

template <typename T>
class Array {
private:
  T* array;
  unsigned int length;
public:
  // Default constructor
  Array();
  // Copy constructor
  Array(const Array& obj);
  // Copy assignment operator
  Array& operator=(const Array& rhs);
  // Destructor
  ~Array();

  // Constructor
  Array(unsigned int length);

  // Array index operator
  T& operator[](size_t index) const;

  // Getter (length)
  unsigned int size() const;

  // Error exception
  class OutBoundException : public std::exception {
      virtual const char* what() const throw();
  };
};

// Default constructor
template <typename T>
Array<T>::Array() {
  this->array = new T[0];
  this->length = 0;
}

// Constructor
template <typename T>
Array<T>::Array(unsigned int n) {
  if (n >= std::numeric_limits<unsigned int>::max())
    throw Array<T>::OutBoundException();
  this->array = new T[n];
  this->length = n;
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array& obj) {
  *this = obj;
}

// Copy assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
  if (this != &rhs) {
    delete[] this->array;
    this->array = new T[rhs.length];
    for (unsigned int i = 0; i < rhs.length; i++)
      array[i] = rhs[i];
    this->length = rhs.length;
  }
  return *this;
}

// Destructor
template <typename T>
Array<T>::~Array() {
  delete[] this->array;
}

// Array index operator
template <typename T>
T& Array<T>::operator[](size_t index) const {
  if (index >= this->length)
    throw Array<T>::OutBoundException();
  return this->array[index];
}

// Getter(length)
template <typename T>
unsigned int Array<T>::size() const {
  return this->length;
}

// Error exception
template <typename T>
const char* Array<T>::OutBoundException::what() const throw() {
  return "index is out bound";
}

#endif
