/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:01:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 10:15:17 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
  std::cout << "\n-----ShrubberyCreationForm Normal Case-----\n";
  {
    try {
      ShrubberyCreationForm shrubbery("Tree");
      Bureaucrat juhur("juhur", 3);
      shrubbery.beSigned(juhur);

      std::cout << shrubbery << std::endl;
      juhur.executeForm(shrubbery);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----ShrubberyCreationForm Error Case 1-----" << std::endl;
  {
    try {
      ShrubberyCreationForm shrubbery("Tree");
      Bureaucrat juhur("juhur", 146);
      shrubbery.beSigned(juhur);

      std::cout << shrubbery << std::endl;
      juhur.executeForm(shrubbery);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----ShrubberyCreationForm Error Case 2-----" << std::endl;
  {
    try {
      ShrubberyCreationForm shrubbery("Tree");
      Bureaucrat juhur("juhur", 140);
      shrubbery.beSigned(juhur);

      std::cout << shrubbery << std::endl;
      juhur.executeForm(shrubbery);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----ShrubberyCreationForm Error Case 3-----" << std::endl;
  {
    try {
      ShrubberyCreationForm shrubbery("Tree");
      Bureaucrat juhur("juhur", 3);
      // shrubbery.beSigned(juhur);

      std::cout << shrubbery << std::endl;
      juhur.executeForm(shrubbery);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----RobotomyRequestForm Normal Case-----\n";
  {
    try {
      RobotomyRequestForm roboto("RobotoForm");
      Bureaucrat juhur("juhur", 3);
      roboto.beSigned(juhur);

      std::cout << roboto << std::endl;
      juhur.executeForm(roboto);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----RobotomyRequestForm Error Case 1-----" << std::endl;
  {
    try {
      RobotomyRequestForm roboto("RobotoForm");
      Bureaucrat juhur("juhur", 73);
      roboto.beSigned(juhur);

      std::cout << roboto << std::endl;
      juhur.executeForm(roboto);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----RobotomyRequestForm Error Case 2-----" << std::endl;
  {
    try {
      RobotomyRequestForm roboto("RobotoForm");
      Bureaucrat juhur("juhur", 46);
      roboto.beSigned(juhur);

      std::cout << roboto << std::endl;
      juhur.executeForm(roboto);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----RobotomyRequestForm Error Case 3-----" << std::endl;
  {
    try {
      RobotomyRequestForm roboto("RobotoForm");
      Bureaucrat juhur("juhur", 3);
      // roboto.beSigned(juhur);

      std::cout << roboto << std::endl;
      juhur.executeForm(roboto);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----PresidentialPardonForm Normal Case-----\n";
  {
    try {
      PresidentialPardonForm president("PresidentialForm");
      Bureaucrat juhur("juhur", 3);
      president.beSigned(juhur);

      std::cout << president << std::endl;
      juhur.executeForm(president);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----PresidentialPardonForm Error Case 1-----" << std::endl;
  {
    try {
      PresidentialPardonForm president("PresidentialForm");
      Bureaucrat juhur("juhur", 26);
      president.beSigned(juhur);

      std::cout << president << std::endl;
      juhur.executeForm(president);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----PresidentialPardonForm Error Case 2-----" << std::endl;
  {
    try {
      PresidentialPardonForm president("PresidentialForm");
      Bureaucrat juhur("juhur", 6);
      president.beSigned(juhur);

      std::cout << president << std::endl;
      juhur.executeForm(president);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  std::cout << "\n-----PresidentialPardonForm Error Case 3-----" << std::endl;
  {
    try {
      PresidentialPardonForm president("PresidentialForm");
      Bureaucrat juhur("juhur", 3);
      // president.beSigned(juhur);

      std::cout << president << std::endl;
      juhur.executeForm(president);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  return 0;
}
