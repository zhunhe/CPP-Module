/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:56:02 by juhur             #+#    #+#             */
/*   Updated: 2022/06/09 23:04:12 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

void PhoneBook::Add() {
	std::string tmpString;
	Contact tmpContact;

	std::cout << "first name? ";
	getline(std::cin, tmpString);
	if (std::cin.eof() || tmpString == "")
		return;
	tmpContact.SetFirstName(tmpString);

	std::cout << "last name? ";
	getline(std::cin, tmpString);
	if (std::cin.eof() || tmpString == "")
		return;
	tmpContact.SetLastName(tmpString);

	std::cout << "nickname? ";
	getline(std::cin, tmpString);
	if (std::cin.eof() || tmpString == "")
		return;
	tmpContact.SetNickname(tmpString);

	std::cout << "phone number? ";
	getline(std::cin, tmpString);
	if (std::cin.eof() || tmpString == "")
		return;
	tmpContact.SetPhoneNumber(tmpString);

	std::cout << "darkest secret? ";
	getline(std::cin, tmpString);
	if (std::cin.eof() || tmpString == "")
		return;
	tmpContact.SetDarkestSecret(tmpString);
	
	this->contact[oldest] = tmpContact;
	if (count < 8)
		++count;
	oldest = (oldest + 1) % MAX_CONTACT;
}

static std::string convertString(std::string s) {
	if (s.length() <= MAX_LEN_COLUMN)
		return s;
	return s.substr(0, MAX_LEN_COLUMN - 1) + ".";
}

static std::string convertString(int index) {
	std::string s = std::to_string(index);

	if (s.length() <= MAX_LEN_COLUMN)
		return s;
	return s.substr(0, MAX_LEN_COLUMN - 1) + ".";
}

static bool	_stoi(int &num, std::string s) {
	num = 0;
	for (size_t i = 0; i < s.size(); i++) {
		if (s[i] < '0' || s[i] > '9')
			return false;
		num = num * 10 + s[i] - '0';
	}
	return true;
}

void PhoneBook::Search() {
	if (count == 0) {
		std::cout << "There is no contact!\n";
		return;
	}
	int index;
	do {
		std::cout << "+------------+------------+------------+------------+\n";
		std::cout << "|      index | first name |  last name |   nickname |\n";
		std::cout << "+------------+------------+------------+------------+\n";
		for (int i = 0 ; i < count; i++) {
			std::cout << "| " << std::setw(MAX_LEN_COLUMN) << std::setfill(' ') << convertString(i)
			<< " | " << std::setw(MAX_LEN_COLUMN) << std::setfill(' ') << convertString(this->contact[i].GetFirstName())
			<< " | " << std::setw(MAX_LEN_COLUMN) << std::setfill(' ') << convertString(this->contact[i].GetLastName())
			<< " | " << std::setw(MAX_LEN_COLUMN) << std::setfill(' ') << convertString(this->contact[i].GetNickname())
			<< " |\n";
		}
		std::cout << "+------------+------------+------------+------------+\n";
		std::cout << "Which index of contacts do you want to check? ";
		std::string input;
		getline(std::cin, input);
		if (input == "" || !_stoi(index, input))
			index = -1;
	} while(!std::cin.eof() && (index < 0 || index >= count));
	if (std::cin.eof())
		return;
	this->contact[index].PrintContactData();
}
