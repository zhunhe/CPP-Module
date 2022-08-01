/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 06:50:25 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 19:40:04 by juhur            ###   ########.fr       */
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

#define LEN 5

int main() {
  int tab[LEN] = {0, 1, 2, 3, 4};

  Awesome tab2[LEN];

  iter<int>(tab, LEN, print);
  ::iter(tab2, LEN, print);
  return 0;
}