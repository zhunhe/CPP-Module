/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:59:54 by juhur             #+#    #+#             */
/*   Updated: 2022/06/15 19:25:33 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static bool readFile(std::string &str, const std::string &filename) {
	std::ifstream file;
	file.open(filename);
	if (!file.is_open()) {
		std::cout << "File name [" << filename << "] is invalid\n";
		return false;
	}
	str = "";
	while (!file.eof()) {
		std::string tmpString;
		getline(file, tmpString);
		str += tmpString + "\n";
	}
	str = str.substr(0, str.size() - 1);
	file.close();
	return true;
}

static void ft_replace(std::string &str, const std::string &pattern, const std::string &replace) {
	size_t n, start = 0;

	while ((n = str.find(pattern, start)) != std::string::npos)
	{
		str.erase(n, pattern.length());
		str.insert(n, replace);
		start = n + replace.length();
	}
}

static bool writeFile(const std::string &str, const std::string &filename) {
	std::ofstream file;
	file.open(filename + ".replace");
	if (!file.is_open()) {
		std::cout << "File name [" << filename << ".replace] is not opened\n";
		return false;
	}
	file.write(str.c_str(), str.size());
	file.close();
	return true;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "./Sed_is_for_losers <FILENAME> <PATTERN> <REPLACEMENT>\n";
		return 1;
	}
	std::string filename = argv[1], s1 = argv[2], s2 = argv[3];

	std::string str = "";
	if (!readFile(str, filename))
		return 1;
	ft_replace(str, s1, s2);
	if (!writeFile(str, filename))
		return 1;
	return 0;
}
