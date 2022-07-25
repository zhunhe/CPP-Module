/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:45:51 by juhur             #+#    #+#             */
/*   Updated: 2022/07/25 05:33:42 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX01_BRAIN_HPP_
#define CPP04_EX01_BRAIN_HPP_

#include <string>

class Brain {
private:
  std::string ideas[100];
public:
  // Default constructor
  Brain();
  // Copy constructor
  Brain(const Brain& obj);
  // Copy assignment operator
  Brain& operator=(const Brain& obj);
  // Destructor
  ~Brain();

  // Constructor
  Brain(std::string idea);

  // Print
  void printIdeas() const;
};

#endif
