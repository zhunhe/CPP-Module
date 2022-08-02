/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:53:42 by juhur             #+#    #+#             */
/*   Updated: 2022/08/02 14:37:45 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main() {
  {
    int num1 = 2;
    int num2 = 3;

    ::swap(num1, num2);
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
    std::cout << "min(num1, num2) = " << ::min(num1, num2) << std::endl;
    std::cout << "max(num1, num2) = " << ::max(num1, num2) << std::endl;

    std::string str1 = "2";
    std::string str2 = "3";

    ::swap(str1, str2);
    std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
    std::cout << "min(str1, str2) = " << ::min(str1, str2) << std::endl;
    std::cout << "max(str1, str2) = " << ::max(str1, str2) << std::endl;
  }
  return 0;
}
