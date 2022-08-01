/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:11:43 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 10:34:58 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main() {
  MutantStack<int> ms;

  for (int i = 0; i < 5; i++)
    ms.push(i + 1);
  {
    MutantStack<int>::iterator begin = ms.begin();
    std::cout << *begin << std::endl;
    *begin = 100; // OK
    MutantStack<int>::iterator end = ms.end();
    std::cout << *(--end) << std::endl;
  }
  std::cout << "--------------------" << std::endl;
  {
    MutantStack<int>::const_iterator begin = ms.begin();
    std::cout << *begin << std::endl;
    // *begin = 100;  // ERROR
    MutantStack<int>::const_iterator end = ms.end();
    std::cout << *(--end) << std::endl;
  }

  return 0;
}