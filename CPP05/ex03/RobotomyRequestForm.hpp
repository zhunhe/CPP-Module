/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:49:18 by juhur             #+#    #+#             */
/*   Updated: 2022/07/27 07:47:30 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_EX03_ROBOTOMYREQUESTFORM_HPP_
#define CPP05_EX03_ROBOTOMYREQUESTFORM_HPP_

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
  std::string target;
public:
  // Default constructor
  RobotomyRequestForm();
  // Copy constructor
  RobotomyRequestForm(const RobotomyRequestForm& obj);
  // Copy assignment operator
  RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
  // Destructor
  ~RobotomyRequestForm();

  // Constructor
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(std::string name, std::string target);

  // Getter
  const std::string& getTarget() const;

  // Execute
  virtual void execute(Bureaucrat const& executer) const;
};

#endif
