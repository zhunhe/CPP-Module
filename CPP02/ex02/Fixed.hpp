/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:47:49 by juhur             #+#    #+#             */
/*   Updated: 2022/06/21 08:23:44 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP02_EX02_FIXED_HPP_
#define CPP02_EX02_FIXED_HPP_

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

  // constructor
  Fixed(int raw);
  Fixed(float raw);

  // comparison operator
  bool operator<(const Fixed& b) const;
  bool operator>(const Fixed& b) const;
  bool operator<=(const Fixed& b) const;
  bool operator>=(const Fixed& b) const;
  bool operator==(const Fixed& b) const;
  bool operator!=(const Fixed& b) const;

  // arithmetic operator
  Fixed operator+(const Fixed& b);
  Fixed operator-(const Fixed& b);
  Fixed operator*(const Fixed& b);
  Fixed operator/(const Fixed& b);

  // in[de]crement operator
  Fixed& operator++(void);
  Fixed& operator--(void);
  Fixed operator++(int);
  Fixed operator--(int);

  int toInt(void) const;
  float toFloat(void) const;

  static const Fixed& min(const Fixed& a, const Fixed& b);
  static Fixed& min(Fixed& a, Fixed& b);
  static const Fixed& max(const Fixed& a, const Fixed& b);
  static Fixed& max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& value);
#endif
