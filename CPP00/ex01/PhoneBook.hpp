/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:55:58 by juhur             #+#    #+#             */
/*   Updated: 2022/06/10 03:45:11 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

const int MAX_CONTACT = 8;
const int MAX_LEN_COLUMN = 10;

class PhoneBook {
private:
	int count;
	int oldest;
	Contact contact[MAX_CONTACT];

public:
	PhoneBook() {
		this->count = 0;
		this->oldest = 0;
	}
	void Add();
	void Search();
};
#endif
