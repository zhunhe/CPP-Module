/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 07:18:16 by juhur             #+#    #+#             */
/*   Updated: 2022/07/31 07:26:11 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define LEN   5
int main() {
  std::cout << "---------- int ----------" << std::endl;
  try {
    Array<int> arrayInt(LEN);
    for (int i = 0; i < LEN; i++)
      arrayInt[i] = i + 1;
    for (int i = 0; i < LEN; i++)
      std::cout << arrayInt[i] << " ";
    std::cout << std::endl;
  } catch(std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << "---------- const int ----------" << std::endl;
  try {
    const Array<int> arrayInt(LEN);
    for (int i = 0; i < LEN; i++)
      arrayInt[i] = i + 1;
    for (int i = 0; i < LEN; i++)
      std::cout << arrayInt[i] << " ";
    std::cout << std::endl;
  } catch(std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << "---------- double ----------" << std::endl;
  try {
    Array<double> arrayDouble(LEN);
    for (int i = 0; i < LEN; i++)
      arrayDouble[i] = (i + 1) * 1.1;
    for (int i = 0; i < LEN; i++)
      std::cout << arrayDouble[i] << " ";
    std::cout << std::endl;
  } catch(std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << "---------- error: constructor ----------" << std::endl;
  try {
    Array<int> arrayInt(-1);  // ERROR !
    for (int i = 0; i < LEN; i++)
      arrayInt[i] = i + 1;
    for (int i = 0; i < LEN; i++)
      std::cout << arrayInt[i] << " ";
    std::cout << std::endl;
  } catch(std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << "---------- error: [] ----------" << std::endl;
  try {
    Array<int> arrayInt(LEN);
    for (int i = 0; i < LEN; i++)
      arrayInt[i] = i + 1;
    std::cout << arrayInt[LEN]; // ERROR !
    // std::cout << arrayInt[-1];
    std::cout << std::endl;
  } catch(std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}