/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:24:08 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 04:31:58 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP06_EX00_CONVERT_HPP_
#define CPP06_EX00_CONVERT_HPP_

#include <string>

class Convert {
private:
  std::string raw;
  int type;
  char c;
  bool c_overflow;
  long i;
  float f;
  double d;

  // Default constructor
  Convert();

  // Convert function
  void convertToActualType();
  void convertToOtherType();

  // Print function
  void printChar();
  void printInt();
  void printFloat();
  void printDouble();
public:
  // Copy constructor
  Convert(const Convert& obj);
  // Copy assignment operator
  Convert& operator=(const Convert& obj);
  // Destructor
  ~Convert();

  // Constructor
  Convert(std::string raw);

  // Print function
  void printAll();
};

#endif
