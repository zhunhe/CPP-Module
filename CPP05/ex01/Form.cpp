/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 05:13:48 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 06:50:51 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

// Default constructor
Form::Form()
  : name("anonymous")
  , signState(false)
  , gradeForSign(1)
  , gradeForExecute(1) {
  std::cout << "Default constructor " << __func__ << " is called" << std::endl;
}

// Constructor
Form::Form(std::string name, int gradeForSign, int gradeForExecute)
  : name(name)
  , signState(false)
  , gradeForSign(gradeForSign)
  , gradeForExecute(gradeForExecute) {
  std::cout << "Constructor " << __func__
  << "(" << this->name
  << ", " << this->gradeForSign
  << ", " << this->gradeForExecute
  << ") is called" << std::endl;
  if (this->gradeForSign < 1 || this->gradeForExecute < 1)
    throw Form::GradeTooHighException();
  else if (this->gradeForSign > 150 || this->gradeForExecute > 150)
    throw Form::GradeTooLowException();
}

// Copy constructor
Form::Form(const Form& obj)
  : name(obj.name)
  , signState(obj.signState)
  , gradeForSign(obj.gradeForSign)
  , gradeForExecute(obj.gradeForExecute) {
  std::cout << "Copy constructor " << __func__ << " is called" << std::endl;
}

// Copy assignment operator
Form& Form::operator=(const Form& obj) {
  std::cout << "Copy assignment operator is called" << std::endl;
  if (this != &obj)
    this->signState = obj.signState;
  return *this;
}

// Destructor
Form::~Form() {
  std::cout << "Destructor " << __func__ << " is called" << std::endl;
}

// Getter
const std::string& Form::getName() const { return this->name; }
bool Form::getsignState() const { return this->signState; }
int Form::getGradeForSign() const { return this->gradeForSign; }
int Form::getGradeForExecute() const { return this->gradeForExecute; }

// Sign
void Form::beSigned(Bureaucrat& obj) {
  if (obj.getGrade() <= this->gradeForSign)
    this->signState = true;
  obj.signForm(this->signState, this->getName());
  if (obj.getGrade() > this->gradeForSign)
    throw Form::GradeTooLowException();
}

// Error exception
const char* Form::GradeTooHighException::what() const throw() { return "grade is too high"; }
const char* Form::GradeTooLowException::what() const throw() { return "grade is too low"; }

// Insertion operator
std::ostream& operator<<(std::ostream& os, const Form& obj) {
  os << "FORM [" << obj.getName() << "] required [" << obj.getGradeForSign() << "] grade, SIGNED? " << (obj.getsignState() ? "[YES]" : "[NOT YET]");
  return os;
}