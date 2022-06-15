/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:52:59 by juhur             #+#    #+#             */
/*   Updated: 2022/06/15 18:59:51 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie() {
	std::cout << this->name << ": is dead...\n";
}
