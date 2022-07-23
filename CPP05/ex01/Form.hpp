/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 05:01:40 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 06:46:12 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_EX01_FORM_HPP_
#define CPP05_EX01_FORM_HPP_

#include <string>
#include "Bureaucrat.hpp"

class Form {
private:
  const std::string name;
  bool signState;
  const int gradeForSign;
  const int gradeForExecute;
public:
  // Default constructor
  Form();
  // Copy constructor
  Form(const Form& obj);
  // Copy assignment operator
  Form& operator=(const Form& obj);
  // Destructor
  ~Form();

  // Constructor
  Form(const std::string name, const int gradeForSign, const int gradeForExecute);

  // Getter
  const std::string& getName() const;
  bool getsignState() const;
  int getGradeForSign() const;
  int getGradeForExecute() const;

  // Sign
  void beSigned(Bureaucrat& obj);

  // Error exception
  class GradeTooHighException : public std::exception {
    virtual const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
    virtual const char* what() const throw();
  };
};

// Insertion operator
std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
