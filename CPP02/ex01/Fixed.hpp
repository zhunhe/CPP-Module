/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:59:14 by juhur             #+#    #+#             */
/*   Updated: 2022/06/17 12:23:59 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
private:
	int fixedNumber;
	static const int fractionalPartLength = 8;
public:
	// Default constructor
	Fixed();
	Fixed(int num);
	Fixed(float num);
	// Copy constructor
	Fixed(const Fixed& fixed);
	// Copy assignment operator
	Fixed& operator=(const Fixed& fixed);
	// Destructor
	~Fixed();

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed& value);
