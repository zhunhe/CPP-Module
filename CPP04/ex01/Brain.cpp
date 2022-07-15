/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:49:48 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 12:16:50 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

// Default constructor
Brain::Brain() {
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Copy constructor
Brain::Brain(const Brain& obj) {
  std::cout << "Copy constructor " << __func__ << " is called\n";
  *this = obj;
}

// Copy assignment operator
Brain& Brain::operator=(const Brain& obj) {
  std::cout << "Copy assignment operator (Brain) is called\n";
  for (int i = 0; i < 100; i++)
    this->ideas[i] = obj.ideas[i];
  return *this;
}

// Destructor
Brain::~Brain() {
  std::cout << "Destructor " << __func__ << " is called\n";
}
