/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:05:00 by juhur             #+#    #+#             */
/*   Updated: 2022/07/28 06:22:02 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_EX03_SHRUBBERYCREATIONFORM_HPP_
#define CPP05_EX03_SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
  std::string target;
public:
  // Default constructor
  ShrubberyCreationForm();
  // Copy constructor
  ShrubberyCreationForm(const ShrubberyCreationForm& obj);
  // Copy assignment operator
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
  // Destructor
  virtual ~ShrubberyCreationForm();

  // Constructor
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(std::string name, std::string target);

  // Getter
  const std::string& getTarget() const;

  // Execute
  virtual void execute(Bureaucrat const& executer) const;
};

#endif
