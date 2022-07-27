/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:57:30 by juhur             #+#    #+#             */
/*   Updated: 2022/07/27 06:57:25 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_EX03_INTERN_HPP_
#define CPP05_EX03_INTERN_HPP_

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

enum {
  FORM_PRESIDENTIAL_PARDON,
  FORM_ROBOTOMY_REQUEST,
  FORM_SHRUBBERY_CREATION,
  MAX_FORM
};

class Intern {
public:
  // Default constructor
  Intern();
  // Copy constructor
  Intern(const Intern& obj);
  // Copy assignment operator
  Intern& operator=(const Intern& obj);
  // Destructor
  ~Intern();

  Form* makeForm(std::string formName, std::string formTarget);

  // Error exception
  class CannotCreateException : public std::exception {
    virtual const char* what() const throw();
  };
};

#endif
