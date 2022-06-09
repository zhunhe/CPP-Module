/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:56:50 by juhur             #+#    #+#             */
/*   Updated: 2022/06/09 21:52:13 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		std::string str = "";
		for (int i = 1; i < argc; i++)
			str += static_cast<std::string>(argv[i]);
		for (size_t i = 0; i < str.size(); i++)
			std::cout << static_cast<char>(toupper(str[i]));
		std::cout << std::endl;
	}
	return 0;
}
