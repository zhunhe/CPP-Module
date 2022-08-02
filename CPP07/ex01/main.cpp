/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 06:50:25 by juhur             #+#    #+#             */
/*   Updated: 2022/08/02 14:39:34 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define LEN 5

int main() {
  std::cout << "----- int -----" << std::endl;
  {
    int tab[LEN] = {1, 2, 3, 4, 5};

    iter<int>(tab, LEN, println);
  }
  std::cout << "----- float -----" << std::endl;
  {
    float tab[LEN] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    iter<float>(tab, LEN, println);
  }
  std::cout << "----- double -----" << std::endl;
  {
    double tab[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};

    iter<double>(tab, LEN, println);
  }
  return 0;
}