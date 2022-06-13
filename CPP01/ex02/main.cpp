/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:01:52 by juhur             #+#    #+#             */
/*   Updated: 2022/06/13 18:42:26 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address of string: " << &string << '\n';
	std::cout << "address of stringPTR: " << stringPTR << '\n';
	std::cout << "address of stringREF: " << &stringREF << '\n';

	std::cout << "value of string: " << string << '\n';
	std::cout << "value of stringPTR: " << *stringPTR << '\n';
	std::cout << "value of stringREF: " << stringREF << '\n';
	return 0;
}
