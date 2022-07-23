/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:01:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 04:59:51 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
  {
    try {
      Bureaucrat juhur("juhur", 75);
      juhur.gradeDown();
      juhur.gradeUp();
      std::cout << juhur << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << "--------------------\n";
  {
    try {
      Bureaucrat juhur("juhur", 75);
      Bureaucrat juhur2(juhur);
      juhur2.gradeDown();
      std::cout << juhur2 << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << "--------------------\n";
  {
    try {
      Bureaucrat juhur("juhur", 0);
      juhur.gradeUp();
      std::cout << juhur << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << "--------------------\n";
  {
    try {
      Bureaucrat juhur("juhur", 1);
      juhur.gradeUp();
      std::cout << juhur << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << "--------------------\n";
  {
    try {
      Bureaucrat juhur("juhur", 150);
      juhur.gradeDown();
      std::cout << juhur << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  return 0;
}