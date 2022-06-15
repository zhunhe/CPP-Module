/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:59:54 by juhur             #+#    #+#             */
/*   Updated: 2022/06/15 16:39:59 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

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

static std::string replacePattern(const std::string &source, const std::string &pattern, const std::string &to) {
	std::string result = "";
	size_t i = 0;
	const int s1_len = pattern.size();
	while (i < source.size()) {
		if (source.substr(i, s1_len) == pattern) {
			result += to;
			i += s1_len;
		} else {
			result += source[i];
			++i;
		}
	}
	return result;
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
	str = replacePattern(str, s1, s2);
	if (!writeFile(str, filename))
		return 1;
	return 0;
}
