/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:01:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 07:58:29 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

int main() {
  std::cout << "--------------------" << std::endl;
  {
    Form form("form1", 55, 55);
    std::cout << form << std::endl;

    Bureaucrat juhur("juhur", 3);
    try {
      form.beSigned(juhur);
      std::cout << form << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "--------------------" << std::endl;
  {
    Form form("form1", 55, 55);
    std::cout << form << std::endl;

    Bureaucrat juhur("juhur", 56);
    try {
      form.beSigned(juhur);
      std::cout << form << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "--------------------" << std::endl;
  {
    try {
      Form form("form1", 0, 55);
      std::cout << form << std::endl;

      Bureaucrat juhur("juhur", 56);
      form.beSigned(juhur);
      std::cout << form << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "--------------------" << std::endl;
  {
    Form form("form1", 55, 55);
    std::cout << form << std::endl;
    try {
      Bureaucrat juhur("juhur", -1);
      form.beSigned(juhur);
      std::cout << form << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  return 0;
}
