/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:22:33 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 13:06:47 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX01_ANIMAL_HPP_
#define CPP04_EX01_ANIMAL_HPP_

#include <string>

class Animal {
protected:
  std::string type;
public:
  // Default constructor
  Animal();
  // Copy constructor
  Animal(const Animal& obj);
  // Copy assignment operator
  Animal& operator=(const Animal& obj);
  // Destructor
  virtual ~Animal();

  const std::string& getType() const;
  
  virtual void makeSound() const = 0;
};

#endif
