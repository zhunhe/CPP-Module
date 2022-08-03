/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 05:52:08 by juhur             #+#    #+#             */
/*   Updated: 2022/08/03 13:38:31 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP08_EX01_SPAN_HPP_
#define CPP08_EX01_SPAN_HPP_

#include <vector>
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
  void addNumber(unsigned long long count, int number);

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
