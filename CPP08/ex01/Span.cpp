/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 05:52:05 by juhur             #+#    #+#             */
/*   Updated: 2022/08/04 15:09:01 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iterator>
#include "Span.hpp"

// Default constructor
Span::Span()
  : N(0) {}

// Constructor
Span::Span(unsigned int N)
  : N(N) {
  this->v.reserve(N);
}

// Copy constructor
Span::Span(const Span& obj) {
  *this = obj;
}

// Copy assignment operator
Span& Span::operator=(const Span& rhs) {
  if (this != &rhs) {
    this->N = rhs.N;
    this->v = rhs.v;
  }
  return *this;
}

// Destructor
Span::~Span() {}

// Add number to Span
void Span::addNumber(int number) {
  if (this->v.size() >= N)
    throw Span::FullException();
  this->v.push_back(number);
}

// Get span
int Span::shortestSpan() const {
  if (this->v.size() < 2)
    throw Span::NoSpanException();
  std::vector<int> tmpV = this->v;
  sort(tmpV.begin(), tmpV.end());
  int diffMin = std::numeric_limits<int>::max();
  for (size_t i = 0; i < tmpV.size() - 1; i++)
    diffMin = std::min(diffMin, tmpV[i + 1] - tmpV[i]);
  return diffMin;
}

int Span::longestSpan() const {
  if (this->v.size() < 2)
    throw Span::NoSpanException();
  int _max = *std::max_element(this->v.begin(), this->v.end());
  int _min = *std::min_element(this->v.begin(), this->v.end());
  return _max - _min;
}

// Error exception
const char* Span::FullException::what() const throw() { return "container already full"; }
const char* Span::NoSpanException::what() const throw() { return "there is no span"; }
