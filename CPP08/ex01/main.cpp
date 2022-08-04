/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:49:44 by juhur             #+#    #+#             */
/*   Updated: 2022/08/04 15:24:59 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "Span.hpp"

int main() {
  std::cout << "---------- NORMAL CASE ---------" << std::endl;
  {
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  std::cout << "---------- FULL ERROR ----------" << std::endl;
  {
    try {
      Span span(10);

      for (int i = 0; i < 10; i++)
        span.addNumber(42);
      span.addNumber(42); // ERROR !
    } catch (const std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "---------- FULL ERROR (USING COPY ASSIGNMENT OPERATOR) ----------" << std::endl;
  {
    try {
      Span span1(20);
      Span span2(10);

      for (int i = 0; i < 10; i++)
        span2.addNumber(42);
      span1 = span2;
      span1.addNumber(11);  // ERROR !
    } catch (const std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "---------- SPAN ERROR ----------" << std::endl;
  {
    try {
      Span span(3);

      span.addNumber(5);
      std::cout << span.shortestSpan() << std::endl;  // ERROR !
      std::cout << span.longestSpan() << std::endl;
    } catch (const std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "---------- ADD NUMBER USING ITERATOR ----------" << std::endl;
  {
    try {
      std::list<int> l;

      for (int i = 0; i < 5; i++)
        l.push_back(i + 1);

      Span span(10);

      span.addNumber(5);
      span.addNumber(l.begin(), l.end());

      std::cout << span.shortestSpan() << std::endl;
      std::cout << span.longestSpan() << std::endl;
    } catch (const std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }

  return 0;
}