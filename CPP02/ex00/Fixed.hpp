/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:29:46 by juhur             #+#    #+#             */
/*   Updated: 2022/06/16 17:47:21 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {
private:
	int fixedPointNumber;
	static const int bitCount = 8;
public:
	// Default constructor
	Fixed();
	// Copy constructor
	Fixed(const Fixed& fixed);
	// Copy assignment operator
	Fixed& operator= (const Fixed& fixed);
	// Destructor
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};
