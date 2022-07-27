/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:11:59 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 10:13:10 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm()
  : Form("PresidentialPardonForm", 25, 5)
  , target("NON_TARGET") {
  std::cout << "Default constructor " << __func__ << " is called" << std::endl;
}

// Constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target)
  : Form("PresidentialPardonForm", 25, 5)
  , target(target) {
  std::cout << "Constructor " << __func__ << "(" << target << ") is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target)
  : Form(name, 25, 5)
  , target(target) {
  std::cout << "Constructor " << __func__ << "(" << name << ", " << target << ") is called" << std::endl;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
  : Form(obj.getName(), 25, 5)
  , target(obj.getTarget()) {
  std::cout << "Copy constructor " << __func__ << " is called" << std::endl;
}

// Copy assignment operator
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
  std::cout << "Copy assignment operator(PresidentialPardonForm) is called" << std::endl;
  if (this != &obj)
    this->target = obj.target;
  return *this;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "Destructor " << __func__ << " is called" << std::endl;
}

// Getter
const std::string& PresidentialPardonForm::getTarget() const { return this->target; }

// Execute
void PresidentialPardonForm::execute(Bureaucrat const& executer) const {
  if (!this->getsignState())
    throw Form::NotSignedException();
  if (executer.getGrade() > this->getGradeForExecute())
    throw Form::GradeTooLowException();
  std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
