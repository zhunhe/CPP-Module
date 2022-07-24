/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 06:18:57 by juhur             #+#    #+#             */
/*   Updated: 2022/07/24 12:34:05 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <cstring>
#include <limits>
#include <cmath>
#include "detectType.hpp"

static bool isChar(std::string str) {
  const int len = str.length();
  if (len != 1 && len != 3)
    return false;
  if (len == 1 && isdigit(str[0]))  // '0' ~ '9' -> NG (integer)
    return false;
  if (len == 3 && str[0] != '\'' && str[2] != '\'') // 'a'
    return false;
  return true;
}

static int isInt(std::string str) {
  char* end = NULL;
  long l = std::strtol(str.c_str(), &end, 10); // if str is [123.456], end will be [.456]
  if (*end == '\0') {// There is non-numeric character in str
    if ((l > std::numeric_limits<int>::max())
    ||  (l < std::numeric_limits<int>::min()))
      return TYPE_INT_OVERFLOW;
  }
  return TYPE_ERROR;
}

static bool isFloat(std::string str) {
  char* end = NULL;
  std::strtof(str.c_str(), &end); // if str is [123.456f], end will be [f]
  if (strlen(end) != 1 || *end != 'f')  // There is no 'f' or invalid char in str
    return false;
  return true;
}

static bool isDouble(std::string str) {
  char* end = NULL;
  std::strtod(str.c_str(), &end);
  if (*end != '\0') // There is invalid char in str
    return false;
  return true;
}

int detectType(std::string str) {
  int type;
  
  if (str == "nan" || str == "nanf")
    return TYPE_NAN;
  if (isChar(str))
    return TYPE_CHAR;
  if (TYPE_ERROR != (type = isInt(str)))
    return type;
  if (isFloat(str))
    return TYPE_FLOAT;
  if (isDouble(str))
    return TYPE_DOUBLE;
  return TYPE_ERROR;
}
