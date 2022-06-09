/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:56:02 by juhur             #+#    #+#             */
/*   Updated: 2022/06/09 13:50:37 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void PhoneBook::Add() {
	std::string tmpString;
	Contact tmpContact;

	std::cout << "first name? ";
	getline(std::cin, tmpString);
	if (std::cin.eof())
		return;
	tmpContact.SetFirstName(tmpString);

	std::cout << "last name? ";
	getline(std::cin, tmpString);
	if (std::cin.eof())
		return;
	tmpContact.SetLastName(tmpString);

	std::cout << "nickname? ";
	getline(std::cin, tmpString);
	if (std::cin.eof())
		return;
	tmpContact.SetNickname(tmpString);

	std::cout << "phone number? ";
	getline(std::cin, tmpString);
	if (std::cin.eof())
		return;
	tmpContact.SetPhoneNumber(tmpString);

	std::cout << "darkest secret? ";
	getline(std::cin, tmpString);
	if (std::cin.eof())
		return;
	tmpContact.SetDarkestSecret(tmpString);
	
	this->contact[oldest] = tmpContact;
	if (count < 8)
		++count;
	oldest = (oldest + 1) % MAX_CONTACT;
}

static std::string convertString(std::string s) {
	std::string ret = "";
	const int len = s.length();

	if (len == MAX_LEN_COLUMN)
		return s;
	if (len < MAX_LEN_COLUMN) {
		for (int i = len; i < MAX_LEN_COLUMN; i++)
			ret += " ";
		ret += s;
	} else {
		for (int i = 0; i < MAX_LEN_COLUMN - 1; i++)
			ret += s[i];
		ret += ".";
	}
	return ret;
}

static std::string convertString(int index) {
	std::string ret = "";
	std::string s = std::to_string(index);
	const int len = s.length();

	if (len == MAX_LEN_COLUMN)
		return s;
	if (len < MAX_LEN_COLUMN) {
		for (int i = len; i < MAX_LEN_COLUMN; i++)
			ret += " ";
		ret += s;
	} else {
		for (int i = 0; i < MAX_LEN_COLUMN - 1; i++)
			ret += s[i];
		ret += ".";
	}
	return ret;
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
			std::cout << "| " << convertString(i)
					<< " | " << convertString(this->contact[i].GetFirstName())
					<< " | " << convertString(this->contact[i].GetLastName())
					<< " | " << convertString(this->contact[i].GetNickname())
					<< " |" << std::endl;
		}
		std::cout << "+------------+------------+------------+------------+\n";
		std::cout << "Which index of contacts do you want to check? ";
		std::cin >> index;
	} while(!std::cin.eof() && (index < 0 || index >= count));
	if (std::cin.eof())
		return;
	std::cin.ignore();
	this->contact[index].PrintContactData();
}
