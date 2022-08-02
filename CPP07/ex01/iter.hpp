/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 06:50:44 by juhur             #+#    #+#             */
/*   Updated: 2022/08/02 14:34:45 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07_EX01_ITER_HPP_
#define CPP07_EX01_ITER_HPP_

#include <iostream>

template <typename T>
void iter(const T* arr, int len, void (*f)(const T& obj)) {
  for (int i = 0; i < len; i++)
    f(arr[i]);
}

template <typename T>
void println(const T& x) {
  std::cout << x << std::endl;
}

#endif
