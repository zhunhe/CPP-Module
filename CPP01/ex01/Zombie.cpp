/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:37:38 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 17:59:56 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void Zombie::setZombieName(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ...\n";
}
