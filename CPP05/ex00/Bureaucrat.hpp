/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:15:20 by juhur             #+#    #+#             */
/*   Updated: 2022/07/28 02:51:30 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_EX00_BUREAUCRAT_HPP_
#define CPP05_EX00_BUREAUCRAT_HPP_

#include <string>

class Bureaucrat {
private:
  const std::string name;
  int grade;
  static const int highestGrade;
  static const int lowestGrade;

  void changeGrade(bool up);
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
