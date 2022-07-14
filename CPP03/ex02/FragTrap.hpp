/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:37:47 by juhur             #+#    #+#             */
/*   Updated: 2022/07/14 15:44:25 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_EX02_FRAGTRAP_HPP_
#define CPP03_EX02_FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
  // Default constructor
  FragTrap();
  // Copy constructor
  FragTrap(const FragTrap& obj);
  // Copy assignment operator
  FragTrap& operator=(const FragTrap& obj);
  // Destructor
  ~FragTrap();

  // Constructor
  FragTrap(std::string name);

  void highFivesGuys();
};

#endif
