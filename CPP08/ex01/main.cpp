/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:49:44 by juhur             #+#    #+#             */
/*   Updated: 2022/08/03 17:19:33 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

      span.addNumber(10, 42);
      span.addNumber(42); // ERROR !
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "---------- FULL ERROR ----------" << std::endl;
  {
    try {
      Span span1(20);
      Span span2(10);

      span2.addNumber(10, 42);
      span1 = span2;
      span1.addNumber(11);  // ERROR !
    } catch (std::exception& e) {
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
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }

  return 0;
}