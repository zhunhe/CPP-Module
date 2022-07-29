/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 04:00:11 by juhur             #+#    #+#             */
/*   Updated: 2022/07/29 04:03:41 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07_EX00_WHATEVER_HPP_
#define CPP07_EX00_WHATEVER_HPP_

template <typename T>
void swap(T& a, T& b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
const T& min(const T& a, const T& b) {
  if (a < b)
    return a;
  return b;
}

template <typename T>
const T& max(const T& a, const T& b) {
  if (a > b)
    return a;
  return b;
}

#endif
