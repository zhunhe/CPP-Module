/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:30:35 by juhur             #+#    #+#             */
/*   Updated: 2022/06/15 18:59:34 by juhur            ###   ########.fr       */
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
	~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
