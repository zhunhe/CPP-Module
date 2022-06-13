/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:49:12 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 19:12:08 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon weapon;
public:
	HumanA(std::string name, Weapon weapon);
	void attack(void);
};
