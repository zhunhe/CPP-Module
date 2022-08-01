/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:53:42 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 19:39:26 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>
#include "whatever.hpp"

class Awesome
{
public:
  // Default constructor
  Awesome() : _n(0) {}

  // Constructor
  Awesome(int n) : _n(n) {}

  // Copy assignment operator
  Awesome& operator=(const Awesome& rhs) {
    if (this != &rhs)
      this->_n = rhs._n;
    return *this;
  }

  // Compare operator
  bool operator==(Awesome const& rhs) const { return this->_n == rhs._n; }
  bool operator!=(Awesome const& rhs) const { return this->_n != rhs._n; }
  bool operator>(Awesome const& rhs) const { return this->_n > rhs._n; }
  bool operator<(Awesome const& rhs) const { return this->_n < rhs._n; }
  bool operator>=(Awesome const& rhs) const { return this->_n >= rhs._n; }
  bool operator<=(Awesome const& rhs) const { return this->_n <= rhs._n; }

  // Getter
  int	get_n(void) const { return (_n); }

private:
  int _n;
};

std::ostream&	operator<<(std::ostream& os, const Awesome& rhs) {
  os << rhs.get_n();
  return os;
}

int main() {
  {
    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
  }
  std::cout << "--------------------" << std::endl;
  {
    Awesome	a(2), b(4);

    swap(a, b);
    std::cout << "Awesome a = " << a << ", Awesome b = " << b << std::endl;
    std::cout << "max(a, b) = " << max(a, b) << std::endl;
    std::cout << "min(a, b) = " << min(a, b) << std::endl;
  }

  return 0;
}