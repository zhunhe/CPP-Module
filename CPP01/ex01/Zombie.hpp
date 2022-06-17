/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:37:46 by juhur             #+#    #+#             */
/*   Updated: 2022/06/17 17:08:46 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	void setZombieName(std::string name);
	void announce(void);
};

Zombie* zombieHorde(int N, std::string name);
