/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 08:54:19 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 05:41:52 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

#define LEN 10
int main() {
  {
    std::vector<int> v(LEN);

    for (size_t i = 0; i < v.size(); i++)
      v[i] = i + 1;

    std::vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
      std::cout << *iter << " ";
    std::cout << std::endl;

    iter = easyfind(v, 42);
    if (iter == v.end())
      std::cout << "Fail to find!" << std::endl;
    else
      std::cout << "Find! " << *iter << std::endl;

    iter = easyfind(v, 5);
    if (iter == v.end())
      std::cout << "Fail to find!" << std::endl;
    else
      std::cout << "Find! " << *iter << std::endl;
  }
  {
    std::list<int> l(LEN);

    // compile error !
    // for (size_t i = 0; i < l.size(); i++)
    //   l[i] = i + 1;

    std::list<int>::iterator iter;
    size_t i = 1;
    for (iter = l.begin(); iter != l.end(); iter++)
      *iter = i++;
    for (iter = l.begin(); iter != l.end(); iter++)
      std::cout << *iter << " ";
    std::cout << std::endl;

    iter = easyfind(l, 42);
    if (iter == l.end())
      std::cout << "Fail to find!" << std::endl;
    else
      std::cout << "Find! " << *iter << std::endl;

    iter = easyfind(l, 5);
    if (iter == l.end())
      std::cout << "Fail to find!" << std::endl;
    else
      std::cout << "Find! " << *iter << std::endl;
  }
}
