/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:11:10 by juhur             #+#    #+#             */
/*   Updated: 2022/07/27 07:47:25 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_EX03_PRESIDENTIALPARDONFORM_HPP_
#define CPP05_EX03_PRESIDENTIALPARDONFORM_HPP_

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
  std::string target;
public:
  // Default constructor
  PresidentialPardonForm();
  // Copy constructor
  PresidentialPardonForm(const PresidentialPardonForm& obj);
  // Copy assignment operator
  PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
  // Destructor
  ~PresidentialPardonForm();

  // Constructor
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(std::string name, std::string target);

  // Getter
  const std::string& getTarget() const;

  // Execute
  virtual void execute(Bureaucrat const& executer) const;
};

#endif