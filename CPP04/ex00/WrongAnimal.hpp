/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:25:14 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 09:26:58 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_WRONGANIMAL_HPP_
#define CPP04_EX00_WRONGANIMAL_HPP_

#include <string>

class WrongAnimal {
protected:
  std::string type;
public:
  // Default constructor
  WrongAnimal();
  // Copy constructor
  WrongAnimal(const WrongAnimal& obj);
  // Copy assignment operator
  WrongAnimal& operator=(const WrongAnimal& obj);
  // Destructor
  ~WrongAnimal();

  const std::string& getType() const;
  
  void makeSound() const;
};

#endif
