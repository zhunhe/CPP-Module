/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 08:54:19 by juhur             #+#    #+#             */
/*   Updated: 2022/08/03 17:25:14 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

#define LEN 5

int main() {
  std::cout << "---------- vector<int> ----------" << std::endl;
  {
    std::vector<int> v(LEN);

    for (size_t i = 0; i < v.size(); i++)
      v[i] = i + 1;

    for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
      std::cout << *iter << " ";
    std::cout << std::endl;

    if (easyfind(v, 42) == v.end())
      std::cout << "Fail to find!" << std::endl;  // !
    else
      std::cout << "Find!" << std::endl;

    if (easyfind(v, 5) == v.end())
      std::cout << "Fail to find!" << std::endl;
    else
      std::cout << "Find!" << std::endl; // !
  }
  std::cout << "---------- list<int> ----------" << std::endl;
  {
    std::list<int> l(LEN);

    // compile error !
    // for (size_t i = 0; i < l.size(); i++)
    //   l[i] = i + 1;

    size_t i = 1;
    for (std::list<int>::iterator iter = l.begin(); iter != l.end(); iter++)
      *iter = i++;

    for (std::list<int>::iterator iter = l.begin(); iter != l.end(); iter++)
      std::cout << *iter << " ";
    std::cout << std::endl;

    if (easyfind(l, 42) == l.end())
      std::cout << "Fail to find!" << std::endl;  // !
    else
      std::cout << "Find!" << std::endl;

    if (easyfind(l, 5) == l.end())
      std::cout << "Fail to find!" << std::endl;
    else
      std::cout << "Find!" << std::endl; // !
  }
  std::cout << "---------- vector<double> ----------" << std::endl;
  {
    std::vector<double> v(LEN);

    for (size_t i = 0; i < v.size(); i++)
      v[i] = (i + 1);

    if (easyfind(v, 5) != v.end())
      std::cout << "Find!" << std::endl;  // !
    else
      std::cout << "Fail to find!" << std::endl;

    for (size_t i = 0; i < v.size(); i++)
      v[i] = (i + 1) * 1.1;

    if (easyfind(v, 5.5) != v.end())
      std::cout << "Find!" << std::endl;  // !
    else
      std::cout << "Fail to find!" << std::endl;
  }
}
