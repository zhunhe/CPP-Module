/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:51:07 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 19:15:27 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon weapon;
public:
	HumanB(std::string name);
	void setWeapon(Weapon weapon);
	void attack(void);
};
