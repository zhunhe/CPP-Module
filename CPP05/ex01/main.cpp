/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:01:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/27 06:26:10 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

int main() {
  std::cout << "--------------------" << std::endl;
  {
    try {
      Form form("form1", 55, 55);
      std::cout << form << std::endl;

      Bureaucrat juhur("juhur", 3);
      juhur.signForm(form);
      juhur.signForm(form);
      std::cout << form << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "--------------------" << std::endl;
  {
    try {
      Form form("form1", 55, 55);
      std::cout << form << std::endl;

      Bureaucrat juhur("juhur", 56);
      juhur.signForm(form);
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
      juhur.signForm(form);
      std::cout << form << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "--------------------" << std::endl;
  {
    try {
      Form form("form1", 55, 55);
      std::cout << form << std::endl;
      Bureaucrat juhur("juhur", -1);
      juhur.signForm(form);
      std::cout << form << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  return 0;
}
