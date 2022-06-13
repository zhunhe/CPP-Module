/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:55:22 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 17:59:09 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* newZombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
		newZombieHorde[i].setZombieName(name);
	return newZombieHorde;
}
