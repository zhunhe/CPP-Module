/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:36:07 by juhur             #+#    #+#             */
/*   Updated: 2022/07/25 05:32:08 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX01_CAT_HPP_
#define CPP04_EX01_CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
  Brain* brain;
public:
  // Default constructor
  Cat();
  // Copy constructor
  Cat(const Cat& obj);
  // Copy assignment operator
  Cat& operator=(const Cat& obj);
  // Destructor
  virtual ~Cat();

  // Constructor
  Cat(std::string idea);

  // Getter
  Brain* getBrain() const;

  virtual void makeSound() const;

};

#endif
