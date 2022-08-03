/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 08:26:52 by juhur             #+#    #+#             */
/*   Updated: 2022/08/03 13:04:55 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP08_EX00_EASYFIND_HPP_
#define CPP08_EX00_EASYFIND_HPP_

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int find) {
  return std::find(container.begin(), container.end(), find);
}

// ❗️ Not required by subject ❗️
// Container -> any container
// Type -> any data type
template <typename Container, typename Type>
typename Container::iterator easyfind(Container& container, Type find) {
  return std::find(container.begin(), container.end(), find);
}

#endif
