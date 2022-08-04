/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 05:52:08 by juhur             #+#    #+#             */
/*   Updated: 2022/08/04 15:21:14 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP08_EX01_SPAN_HPP_
#define CPP08_EX01_SPAN_HPP_

#include <vector>
#include <iterator>
#include <exception>

class Span {
private:
  unsigned int N;
  std::vector<int> v;

  // Default constructor
  Span();
public:
  // Copy constructor
  Span(const Span& obj);
  // Copy assignment operator
  Span& operator=(const Span& rhs);
  // Destructor
  ~Span();

  // Constructor
  Span(unsigned int N);

  // Add number to Span
  void addNumber(int number);
  template <typename T>
  void addNumber(T begin, T end) {
    if (static_cast<unsigned long long>(std::distance(begin, end)) > this->N - this->v.size())
      throw Span::FullException();
    while (begin != end)
      this->v.push_back(*(begin++));
  }

  // Get distance
  // If there are no numbers stored, or only one, no span can be found. -> throw exception
  int shortestSpan() const;
  int longestSpan() const;

  // Error exception
  class FullException : public std::exception {
    virtual const char* what() const throw();
  };

  class NoSpanException : public std::exception {
    virtual const char* what() const throw();
  };
};

#endif
