/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:36:07 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 09:20:01 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_CAT_HPP_
#define CPP04_EX00_CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal {
public:
  // Default constructor
  Cat();
  // Copy constructor
  Cat(const Cat& obj);
  // Copy assignment operator
  Cat& operator=(const Cat& obj);
  // Destructor
  virtual ~Cat();

  virtual void makeSound() const;
};

#endif
