/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:46:40 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 19:15:08 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string type);
	const std::string& getType(void);
	void setType(std::string type);
};
