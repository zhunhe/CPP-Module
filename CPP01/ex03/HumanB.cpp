/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:57:13 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 19:15:24 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

void HumanB::setWeapon(Weapon weapon) {
	this->weapon = weapon;
}

void HumanB::attack(void) {
	std::cout << name << " attacks with their " << this->weapon.getType() << '\n';
}
