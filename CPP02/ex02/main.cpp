/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:47:00 by juhur             #+#    #+#             */
/*   Updated: 2022/07/23 07:59:26 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
  {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;
  }
  std::cout << "--------------------\n";
  {
    Fixed c = 1;
    Fixed d = 0;
    Fixed e;
    try {
      e = c / d;
      std::cout << e << std::endl;
    } catch (Fixed exception) {
      std::cerr << "[ERROR] divider is " << exception << std::endl;
    }
  }
  return 0;
}
