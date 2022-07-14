/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:56:26 by juhur             #+#    #+#             */
/*   Updated: 2022/07/14 15:34:29 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap()
  : ClapTrap() {
  this->setHitPoint(100);
  this->setEnergyPoint(50);
  this->setAttackDamage(20);
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Constructor
ScavTrap::ScavTrap(std::string name)
  : ClapTrap(name) {
  this->setHitPoint(100);
  this->setEnergyPoint(50);
  this->setAttackDamage(20);
  std::cout << "Constructor " << __func__ << "(" << this->name << ") is called\n";
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& obj)
  : ClapTrap(obj) {
    std::cout << "Copy constructor " << __func__ << "(" << this->name << ") is called\n";
  *this = obj;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
  std::cout << "Copy assignment operator(ScavTrap) is called\n";
  this->name = obj.name;
  this->hitPoint = obj.hitPoint;
  this->energyPoint = obj.energyPoint;
  this->attackDamage = obj.attackDamage;
  return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
  std::cout << "Destructor " << __func__ << "(" << this->name << ") is called\n";
}

void ScavTrap::attack(const std::string& target) {
  if (this->hitPoint == 0) {  // ATTACKER's HP is 0
    std::cout << this->name << "(ScavTrap) is already dead. " << target;
    this->attackDamage = 0;
  } else if (this->energyPoint == 0) {  // ATTACKER's EP is 0
    std::cout << this->name << "(ScavTrap) doesn't have enough energy. " << target;
    this->attackDamage = 0;
  } else {  // ATTACK !!
    std::cout << this->name << "(ScavTrap) attacks " << target;
    --this->energyPoint;
  }
}

void ScavTrap::guardGate() {
  std::cout << this->name << "(ScavTrap) is now in Gate keeper mode\n";
}
