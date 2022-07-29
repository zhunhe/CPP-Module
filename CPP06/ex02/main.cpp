/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 05:06:29 by juhur             #+#    #+#             */
/*   Updated: 2022/07/29 03:51:16 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
  std::cout << __func__ << " is called, ";
  switch (rand() % 3) {
    case 0: std::cout << "A created" << std::endl; return new A;
    case 1: std::cout << "B created" << std::endl; return new B;
    case 2: std::cout << "C created" << std::endl; return new C;
  }
  return static_cast<Base*>(NULL);
}

void identify(Base* p) {
  std::cout << __func__ << "(Base* p) is called type: ";
  if (dynamic_cast<A*>(p))
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B*>(p))
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C*>(p))
    std::cout << "C" << std::endl;
}

void identify(Base& p) {
  std::cout << __func__ << "(Base& p) is called type: ";
  try {
    dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
    return;
  } catch(...) {}

  try {
    dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
    return;
  } catch(...) {}

  try {
    dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
  } catch(...) {}
}

int main() {
  srand(time(NULL));
  for (int i = 0; i < 5; i++) {
    Base* base = generate();
    identify(base);
    identify(*base);
    delete base;
  }
  return 0;
}
