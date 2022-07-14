/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:23:10 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 09:20:04 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_DOG_HPP_
#define CPP04_EX00_DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal {
public:
 // Default constructor
  Dog();
  // Copy constructor
  Dog(const Dog& obj);
  // Copy assignment operator
  Dog& operator=(const Dog& obj);
  // Destructor
  virtual ~Dog();

  virtual void makeSound() const;
};

#endif
