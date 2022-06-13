/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:30:35 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 17:15:10 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string name);
	void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
