/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:11:43 by juhur             #+#    #+#             */
/*   Updated: 2022/08/03 17:15:52 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main() {
  std::cout << "---------- test from pdf ----------" << std::endl;
  {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "top: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    // [...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
      std::cout << "*it: " << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
  }
  std::cout << "---------- iterator value change test ----------" << std::endl;
  {
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
    std::cout << "---------- const iterator value change test ----------" << std::endl;
    {
      MutantStack<int>::const_iterator begin = ms.begin();
      std::cout << *begin << std::endl;
      // *begin = 100;  // ERROR
      MutantStack<int>::const_iterator end = ms.end();
      std::cout << *(--end) << std::endl;
    }
  }
  return 0;
}