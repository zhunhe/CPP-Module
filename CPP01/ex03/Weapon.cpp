/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:52:23 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 19:15:06 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	;
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

const std::string& Weapon::getType(void) {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
