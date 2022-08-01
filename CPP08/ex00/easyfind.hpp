/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 08:26:52 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 05:18:37 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP08_EX00_EASYFIND_HPP_
#define CPP08_EX00_EASYFIND_HPP_

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int find) {
  return std::find(container.begin(), container.end(), find);
}

#endif
