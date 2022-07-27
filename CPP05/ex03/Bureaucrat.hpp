/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:15:20 by juhur             #+#    #+#             */
/*   Updated: 2022/07/27 07:47:15 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_EX03_BUREAUCRAT_HPP_
#define CPP05_EX03_BUREAUCRAT_HPP_

#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
  const std::string name;
  int grade;
  static const int highestGrade;
  static const int lowestGrade;
public:
  // Default constructor
  Bureaucrat();
  // Copy constructor
  Bureaucrat(const Bureaucrat& obj);
  // Copy assignment operator
  Bureaucrat& operator=(const Bureaucrat& obj);
  // Destructor
  ~Bureaucrat();

  // Constructor
  Bureaucrat(const std::string name, int grade);

  // Getter
  const std::string& getName() const;
  int getGrade() const;

  // Grade up & down
  void gradeUp();
  void gradeDown();

  // Sign
  void signForm(Form& form);

  void executeForm(Form const& form);

  // Error exception
  class GradeTooHighException : public std::exception {
    virtual const char* what() const throw();
  };
  class GradeTooLowException : public std::exception {
    virtual const char* what() const throw();
  };
};

// Insertion operator
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
