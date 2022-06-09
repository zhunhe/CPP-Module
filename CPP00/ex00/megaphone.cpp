/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:56:50 by juhur             #+#    #+#             */
/*   Updated: 2022/06/09 14:38:17 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j] != '\0'; j++)
				std::cout << static_cast<char>(toupper(argv[i][j]));
		std::cout << std::endl;
	}
	return 0;
}
