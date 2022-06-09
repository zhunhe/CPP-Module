/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:56:14 by juhur             #+#    #+#             */
/*   Updated: 2022/06/09 23:05:00 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

// const reference vs value
void Contact::SetFirstName(std::string firstName) {
	this->firstName = firstName;
}

void Contact::SetLastName(std::string lastName) {
	this->lastName = lastName;
}

void Contact::SetNickname(std::string nickname) {
	this->nickname = nickname;
}

void Contact::SetPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Contact::SetDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

std::string Contact::GetFirstName() {
	return this->firstName;
}

std::string Contact::GetLastName() {
	return this->lastName;
}

std::string Contact::GetNickname() {
	return this->nickname;
}

std::string Contact::GetPhoneNumber() {
	return this->phoneNumber;
}

std::string Contact::GetDarkestSecret() {
	return this->darkestSecret;
}

void Contact::PrintContactData() {
	std::cout << "first name: " << this->GetFirstName() << '\n';
	std::cout << "last name: " << this->GetLastName() << '\n';
	std::cout << "nickname: " << this->GetNickname() << '\n';
	std::cout << "phone number: " << this->GetPhoneNumber() << '\n';
	std::cout << "darkest secret: " << this->GetPhoneNumber() << '\n';
}
