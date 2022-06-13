/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:34:05 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 18:00:58 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* zombieHorde_;

	zombieHorde_ = zombieHorde(5, "juhur");
	for (int i = 0; i < 5; i++)
		zombieHorde_[i].announce();
	delete[] zombieHorde_;
	return 0;
}
