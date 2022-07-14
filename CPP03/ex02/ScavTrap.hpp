/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:56:35 by juhur             #+#    #+#             */
/*   Updated: 2022/07/14 15:37:19 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_EX02_SCAVTRAP_HPP_
#define CPP03_EX02_SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  // Default constructor
  ScavTrap();
  // Copy constructor
  ScavTrap(const ScavTrap& obj);
  // Copy assignment operator
  ScavTrap& operator=(const ScavTrap& obj);
  // Destructor
  ~ScavTrap();

  // Constructor
  ScavTrap(std::string name);

  void attack(const std::string& target);
  void guardGate();
};
#endif
