/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:23:19 by juhur             #+#    #+#             */
/*   Updated: 2022/07/24 12:39:33 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Convert.hpp"

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "[Usage]: ./a.out [value]" << std::endl;
    return 1;
  }
  Convert convert(argv[1]);
  convert.printAll();
  return 0;
}
