/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:29:46 by juhur             #+#    #+#             */
/*   Updated: 2022/06/21 07:39:04 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP02_EX00_FIXED_HPP_
#define CPP02_EX00_FIXED_HPP_

class Fixed {
private:
  int raw;
  static const int fractionalBit = 8;
public:
  // Default constructor
  Fixed();
  // Copy constructor
  Fixed(const Fixed& fixed);
  // Copy assignment operator
  Fixed& operator=(const Fixed& fixed);
  // Destructor
  ~Fixed();

  int getRawBits(void) const;
  void setRawBits(int const raw);
};
#endif
