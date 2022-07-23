/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:57:32 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 10:10:29 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm()
  : Form("RobotomyRequestForm", 72, 45)
  , target("NON_TARGET") {
  std::cout << "Default constructor " << __func__ << " is called" << std::endl;
}

// Constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target)
  : Form("RobotomyRequestForm", 72, 45)
  , target(target) {
  std::cout << "Constructor " << __func__ << "(" << target << ") is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target)
  : Form(name, 72, 45)
  , target(target) {
  std::cout << "Constructor " << __func__ << "(" << name << ", " << target << ") is called" << std::endl;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
  : Form(obj.getName(), 72, 45)
  , target(obj.getTarget()) {
  std::cout << "Copy constructor " << __func__ << " is called" << std::endl;
}

// Copy assignment operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
  std::cout << "Copy assignment operator(RobotomyRequestForm) is called" << std::endl;
  if (this != &obj)
    this->target = obj.target;
  return *this;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "Destructor " << __func__ << " is called" << std::endl;
}

// Getter
const std::string& RobotomyRequestForm::getTarget() const { return this->target; }

// Execute
void RobotomyRequestForm::execute(Bureaucrat const& executer) const {
  if (!this->getsignState())
    throw Form::NotSignedException();
  if (executer.getGrade() > this->getGradeForExecute())
    throw Form::GradeTooLowException();
  srand(time(NULL));
  std::cout << this->target;
  if (rand() % 2)
    std::cout << " has been robotomized successfully";
  else
    std::cout << " failed to robotomize";
  std::cout << std::endl;
}
