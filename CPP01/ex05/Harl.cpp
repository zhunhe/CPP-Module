/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:04:29 by juhur             #+#    #+#             */
/*   Updated: 2022/06/15 17:51:10 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
	std::string levels[4];
	void (Harl::*function[4])(void);
	function[0] = &Harl::debug, levels[0] = "DEBUG";
	function[1] = &Harl::info, levels[1] = "INFO";
	function[2] = &Harl::warning, levels[2] = "WARNING";
	function[3] = &Harl::error, levels[3] = "ERROR";
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*function[i])();
}
