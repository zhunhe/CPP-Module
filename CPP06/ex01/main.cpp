/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:03:28 by juhur             #+#    #+#             */
/*   Updated: 2022/08/01 04:04:28 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data {
  std::string name;
  int decimal;
  double floating;
};

uintptr_t serialize(Data* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
  return reinterpret_cast<Data*>(raw);
}

int main() {
  Data data = {
    "42Seoul" // name
    , 42      // decimal
    , 42.42f  // floating
  };

  uintptr_t serialized = serialize(&data);
  Data* deserialized = deserialize(serialized);

  std::cout << &data << std::endl;
  std::cout << deserialized << std::endl;
  
  std::cout << std::endl;

  std::cout << deserialized->name << std::endl;
  std::cout << deserialized->decimal << std::endl;
  std::cout << deserialized->floating << std::endl;
}
