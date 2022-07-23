/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:23:10 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 05:02:40 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX02_DOG_HPP_
#define CPP04_EX02_DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
  Brain* brain;
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
