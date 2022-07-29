/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 06:50:25 by juhur             #+#    #+#             */
/*   Updated: 2022/07/31 06:50:20 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "iter.hpp"

class Awesome {
public:
  // Default constructor
  Awesome() : _n(42) { return; }

  // Getter
  int get() const { return this->_n; }

private:
  int _n;
};

// Insertion operator
std::ostream& operator<<(std::ostream& os, Awesome const& rhs) {
  os << rhs.get();
  return os;
}

template <typename T>
void print(T const& x) {
  std::cout << x << std::endl;
}

int main() {
  int len = 5;
  int tab[len] = {0, 1, 2, 3, 4};

  Awesome tab2[len];

  iter<int>(tab, len, print);
  ::iter(tab2, len, print);
  return 0;
}