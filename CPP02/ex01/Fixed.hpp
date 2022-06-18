/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:59:14 by juhur             #+#    #+#             */
/*   Updated: 2022/06/19 04:35:37 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP02_EX01_FIXED_HPP_
#define CPP02_EX01_FIXED_HPP_

#include <iostream>

class Fixed {
private:
  int raw;
  static const int fractionalBit = 8;
public:
  // Default constructor
  Fixed();
  Fixed(int raw);
  Fixed(float raw);
  // Copy constructor
  Fixed(const Fixed& fixed);
  // Copy assignment operator
  Fixed& operator=(const Fixed& fixed);
  // Destructor
  ~Fixed();

  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed& value);
#endif
