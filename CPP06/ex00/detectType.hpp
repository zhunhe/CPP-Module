/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 06:19:19 by juhur             #+#    #+#             */
/*   Updated: 2022/07/25 07:21:48 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP06_EX00_DETECTTYPE_HPP_
#define CPP06_EX00_DETECTTYPE_HPP_

#include <string>

enum {
  TYPE_ERROR = 0,
  TYPE_CHAR,
  TYPE_INT,
  TYPE_INT_OVERFLOW,
  TYPE_FLOAT,
  TYPE_DOUBLE,
  MAX_TYPE
};

int detectType(std::string str);

#endif
