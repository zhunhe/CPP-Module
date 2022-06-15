/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:28:04 by juhur             #+#    #+#             */
/*   Updated: 2022/06/15 19:08:14 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

template <typename T>
static void safe_delete(T& p){
	delete p;
	p = NULL;
}

int main() {
	Zombie hena = Zombie("hena");
	hena.announce();

	Zombie* alee = newZombie("alee");
	if (alee != NULL)
		alee->announce();
	safe_delete(alee);
	safe_delete(alee);
	if (alee != NULL)
		alee->announce();

	static const std::string zombies[4] = {
		"kalee",
		"min-jo",
		"jae-kim",
		"juhur"
	};
	for (int i = 0; i < 10; i++)
		randomChump(zombies[rand() % 4]);
	return 0;
}
