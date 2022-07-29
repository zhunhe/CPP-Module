/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 06:50:44 by juhur             #+#    #+#             */
/*   Updated: 2022/07/31 06:40:24 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07_EX01_ITER_HPP_
#define CPP07_EX01_ITER_HPP_

#include <iostream>

template <typename T>
void  iter(T* arr, const int len, void (*f)(const T& obj)) {
  for (int i = 0; i < len; i++)
    f(arr[i]);
}

#endif
