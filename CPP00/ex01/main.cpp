/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:46:42 by juhur             #+#    #+#             */
/*   Updated: 2022/06/09 14:46:43 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main() {
	std::string cmd;
	PhoneBook phoneBook;

	do {
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
			phoneBook.Add();
		else if (cmd == "SEARCH")
			phoneBook.Search();
	} while (!std::cin.eof()
		&& std::cout << "Command [ADD, SEARCH, EXIT]: "
		&& getline(std::cin, cmd));
	std::cout << "\nGood bye!\n";
	return 0;
}
