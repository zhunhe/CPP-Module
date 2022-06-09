/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:56:17 by juhur             #+#    #+#             */
/*   Updated: 2022/06/09 13:44:58 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	void SetFirstName(std::string firstName);
	void SetLastName(std::string lastName);
	void SetNickname(std::string nickname);
	void SetPhoneNumber(std::string phoneNumber);
	void SetDarkestSecret(std::string darkestSecret);

	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNickname();
	std::string GetPhoneNumber();
	std::string GetDarkestSecret();

	void PrintContactData();
};
#endif
