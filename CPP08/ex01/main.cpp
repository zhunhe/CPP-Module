/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:49:44 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 09:10:14 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main() {
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
  std::cout << "-------------------------" << std::endl;
  {
    try {
      Span span(10);

      span.addManyNumber(10, 42);
      span.addNumber(42);
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "-------------------------" << std::endl;
  {
    try {
      Span span1(20);
      Span span2(10);

      span2.addManyNumber(10, 42);
      span1 = span2;
      span1.addNumber(11);
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "-------------------------" << std::endl;
  {
    try {
      Span span(1);

      span.addNumber(5);
      std::cout << span.shortestSpan() << std::endl;
      std::cout << span.longestSpan() << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }

  return 0;
}