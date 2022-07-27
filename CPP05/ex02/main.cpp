/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:01:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/27 06:40:24 by juhur            ###   ########.fr       */
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
      juhur.signForm(shrubbery);

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
      juhur.signForm(shrubbery);

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
      juhur.signForm(shrubbery);

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
      // juhur.signForm(shrubbery);

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
      juhur.signForm(roboto);

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
      juhur.signForm(roboto);

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
      juhur.signForm(roboto);

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
      // juhur.signForm(roboto);

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
      juhur.signForm(president);

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
      juhur.signForm(president);

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
      juhur.signForm(president);

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
      // juhur.signForm(president);

      std::cout << president << std::endl;
      juhur.executeForm(president);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
    }
  }
  return 0;
}
