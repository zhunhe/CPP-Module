/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:01:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/28 06:24:09 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"

int main() {
  std::cout << "\n-----PresidentialPardonForm Normal Case-----\n";
  {
    try {
      Intern donghyki;

      Form* form = donghyki.makeForm("presidential pardon", "presidential");
      std::cout << *form << std::endl;

      Bureaucrat juhur("juhur", 3);
      juhur.signForm(*form);

      std::cout << *form << std::endl;
      juhur.executeForm(*form);

      delete form;
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----RobotomyRequestForm Normal Case-----\n";
  {
    try {
      Intern donghyki;

      Form* form = donghyki.makeForm("robotomy request", "robotomy");
      std::cout << *form << std::endl;

      Bureaucrat juhur("juhur", 3);
      juhur.signForm(*form);

      std::cout << *form << std::endl;
      juhur.executeForm(*form);

      delete form;
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----ShrubberyCreationForm Normal Case-----\n";
  {
    try {
      Intern donghyki;

      Form* form = donghyki.makeForm("shrubbery creation", "shrubbery");
      std::cout << *form << std::endl;
      
      Bureaucrat juhur("juhur", 3);
      juhur.signForm(*form);

      std::cout << *form << std::endl;
      juhur.executeForm(*form);

      delete form;
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----Error Case-----\n";
  {
    try {
      Intern donghyki;

      Form* form = donghyki.makeForm("42 Seoul", "42");
      std::cout << *form << std::endl;

      Bureaucrat juhur("juhur", 3);
      juhur.signForm(*form);

      std::cout << *form << std::endl;
      juhur.executeForm(*form);

      delete form;
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  return 0;
}
