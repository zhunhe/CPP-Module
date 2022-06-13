/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:54:55 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 19:14:53 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
	this->name = name;
	this->weapon = weapon;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << this->weapon.getType() << '\n';
}
