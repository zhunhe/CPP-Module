/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:47:00 by juhur             #+#    #+#             */
/*   Updated: 2022/07/13 05:40:29 by juhur            ###   ########.fr       */
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

  {
    Fixed c = 1;
    Fixed d = 0;
    Fixed e;
    try {
      e = c / d;
    } catch (Fixed exception) {
      std::cout << "divider is " << exception << " , exit program\n";
      return 1;
    }
    std::cout << e << std::endl;
  }

  return 0;
}
