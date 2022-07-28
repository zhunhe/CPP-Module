/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:26:48 by juhur             #+#    #+#             */
/*   Updated: 2022/07/28 02:31:09 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

const int Bureaucrat::highestGrade = 1;
const int Bureaucrat::lowestGrade = 150;

// Default constructor
Bureaucrat::Bureaucrat()
  : name("anonymous")
  , grade(Bureaucrat::highestGrade) {
  std::cout << "Default constructor " << __func__ << " is called" << std::endl;
}

// Constructor
Bureaucrat::Bureaucrat(const std::string name, int grade)
  : name(name)
  , grade(grade) {
  std::cout << "Constructor " << __func__ << "(" << this->name << ", " << this->grade << ") is called" << std::endl;
  if (this->grade < Bureaucrat::highestGrade)
    throw Bureaucrat::GradeTooHighException();
  else if (this->grade > Bureaucrat::lowestGrade)
    throw Bureaucrat::GradeTooLowException();
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& obj)
  : name(obj.name)
  , grade(obj.grade) {
  std::cout << "Copy constructor " << __func__ << " is called" << std::endl;
}

// Copy assignment operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
  std::cout << "Copy assignment operator is called" << std::endl;
  if (this != &obj)
    this->grade = obj.grade;
  return *this;
}

// Destructor
Bureaucrat::~Bureaucrat() {
  std::cout << "Destructor " << __func__ << " is called" << std::endl;
}

// Getter
const std::string& Bureaucrat::getName() const { return this->name; }
int Bureaucrat::getGrade() const { return this->grade; }

// Grade up & down
void Bureaucrat::gradeUp() {
  std::cout << __func__ << "() is called, ";
  if (this->grade <= Bureaucrat::highestGrade)
    throw Bureaucrat::GradeTooHighException();
  std::cout << this->name << "'s grade ";
  std::cout << this->grade-- << " -> ";
  std::cout << this->grade << std::endl;
}

void Bureaucrat::gradeDown() {
  std::cout << __func__ << "() is called, ";
  if (this->grade >= Bureaucrat::lowestGrade)
    throw Bureaucrat::GradeTooLowException();
  std::cout << this->name << "'s grade ";
  std::cout << this->grade++ << " -> ";
  std::cout << this->grade << std::endl;
}

// Sign
void Bureaucrat::signForm(Form& form) {
  try {
    form.beSigned(*this);
    std::cout << this->name << " signed [" << form.getName() << "]" << std::endl;
  } catch (const std::exception& e) {
    std::cerr << this->name << " couldn't sign [" << form.getName() << "] because " << e.what() << std::endl;
  }
}

// Error exception
const char* Bureaucrat::GradeTooHighException::what() const throw() { return "grade is too high"; }
const char* Bureaucrat::GradeTooLowException::what() const throw() { return "grade is too low"; }

// Insertion operator
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
  os << obj.getName() << "'s grade is " << obj.getGrade();
  return os;
}
