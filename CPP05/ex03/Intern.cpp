/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:57:16 by juhur             #+#    #+#             */
/*   Updated: 2022/07/27 07:38:01 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"

// Default constructor
Intern::Intern() {
  std::cout << "Default constructor " << __func__ << " is called" << std::endl;
};

// Copy constructor
Intern::Intern(const Intern& obj) {
  std::cout << "Copy constructor " << __func__ << " is called" << std::endl;
  *this = obj;
}

// Copy assignment operator
Intern& Intern::operator=(const Intern& obj) {
  std::cout << "Copy assignment operator is called" << std::endl;
  if (this != &obj) {
    ;
  }
  return *this;
}

// Destructor
Intern::~Intern() {
  std::cout << "Destructor is called" << std::endl;
}

static Form* makeShruberry(std::string target)
{
	return new ShrubberyCreationForm(target);
}

static Form* makeRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

static Form* makePresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string form, std::string target) {
  std::string forms[MAX_FORM] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
  };
  Form	*(*func[MAX_FORM])(std::string target) = {
		&makePresidential,
		&makeRobotomy,
		&makeShruberry,
	};
  int i;
  for (i = 0; i < MAX_FORM; i++)
    if (forms[i] == form)
      break;
  if (i == MAX_FORM)
    throw Intern::CannotCreateException();
  std::cout << "Intern creates " << forms[i] << std::endl;
  return (*func[i])(target);
}

const char* Intern::CannotCreateException::what() const throw()
{
	return "Intern can't create this form";
}
