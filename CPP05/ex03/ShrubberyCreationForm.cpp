/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:21:13 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 09:58:37 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm()
  : Form("ShrubberyCreationForm", 145, 137)
  , target("NON_TARGET") {
  std::cout << "Default constructor " << __func__ << " is called" << std::endl;
}

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
  : Form("ShrubberyCreationForm", 145, 137)
  , target(target) {
  std::cout << "Constructor " << __func__ << "(" << target << ") is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target)
  : Form(name, 145, 137)
  , target(target) {
  std::cout << "Constructor " << __func__ << "(" << name << ", " << target << ") is called" << std::endl;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
  : Form(obj.getName(), 145, 137)
  , target(obj.getTarget()) {
  std::cout << "Copy constructor " << __func__ << " is called" << std::endl;
  *this = obj;
}

// Copy assignment operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
  std::cout << "Copy assignment operator(ShrubberyCreationForm) is called" << std::endl;
  if (this != &obj)
    this->target = obj.target;
  return *this;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "Destructor " << __func__ << " is called" << std::endl;
}

// Getter
const std::string& ShrubberyCreationForm::getTarget() const { return this->target; }

// Execute
void ShrubberyCreationForm::execute(Bureaucrat const& executer) const {
  if (!this->getsignState())
    throw Form::NotSignedException();
  if (executer.getGrade() > this->getGradeForExecute())
    throw Form::GradeTooLowException();
  std::string fileName(this->target + "_shrubbery");
  std::ofstream	os;
  os.open(fileName.c_str());
  if (!os.is_open())
    throw Form::FailToFileOpenException();
  std::string tree =
  "                   .o00o\n"
  "                 o000000oo\n"
  "                00000000000o\n"
  "               00000000000000\n"
  "            oooooo  00000000  o88o\n"
  "         ooOOOOOOOoo  ```''  888888\n"
  "       OOOOOOOOOOOO'.qQQQQq. `8888'\n"
  "      oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n"
  "      OOOOOOOOOO'.QQQQQQQQQQ/ /q\n"
  "       OOOOOOOOO QQQQQQQQQQ/ /QQ\n"
  "         OOOOOOOOO `QQQQQQ/ /QQ'\n"
  "           OO:F_P:O `QQQ/  /Q'\n"
  "              \\. \\ |  // |\n"
  "              d\\ \\\\|_////\n"
  "              qP| \\ _' `|Ob\n"
  "                 \\  / \\  \\Op\n"
  "                 |  | O| |\n"
  "         _       /\\. \\_/ /\\\n"
  "          `---__/|_\\    //|  __\n"
  "                `-'  `-'`-'-'";
  os << tree;
  os.close();
}
