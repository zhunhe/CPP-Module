/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:28:15 by juhur             #+#    #+#             */
/*   Updated: 2022/07/15 09:38:26 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_WRONGCAT_HPP_
#define CPP04_EX00_WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
  // Default constructor
  WrongCat();
  // Copy constructor
  WrongCat(const WrongCat& obj);
  // Copy assignment operator
  WrongCat& operator=(const WrongCat& obj);
  // Destructor
  ~WrongCat();

  void makeSound() const;
};

#endif
