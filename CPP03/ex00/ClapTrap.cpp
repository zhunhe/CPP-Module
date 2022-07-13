/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:35:33 by juhur             #+#    #+#             */
/*   Updated: 2022/07/13 07:13:58 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() {
  std::cout << "Default constructor is called\n";
  this->name = "anonymous";
  this->hitPoint = 10;
  this->energyPoint = 10;
  this->attackDamage = 0;
}

// Constructor
ClapTrap::ClapTrap(std::string name) {
  std::cout << "Constructor is called\n";
  this->name = name;
  this->hitPoint = 10;
  this->energyPoint = 10;
  this->attackDamage = 0;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& clapTrap) {
  std::cout << "Copy constructor is called\n";
  *this = clapTrap;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap) {
  std::cout << "Copy assignment operator is called\n";
  this->name = clapTrap.name;
  this->hitPoint = clapTrap.hitPoint;
  this->energyPoint = clapTrap.energyPoint;
  this->attackDamage = clapTrap.attackDamage;
  return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
  std::cout << "Destructor is called\n";
}

// Getter
const std::string& ClapTrap::getName(void) const {
  std::cout << " (" << __func__ << " is called) ";
  return this->name;
}

const unsigned int& ClapTrap::getHitPoint(void) const {
  std::cout << " (" << __func__ << " is called) ";
  return this->hitPoint;
}

const unsigned int& ClapTrap::getEnergyPoint(void) const {
  std::cout << " (" << __func__ << " is called) ";
  return this->energyPoint;
}

const unsigned int& ClapTrap::getAttackDamage(void) const {
  std::cout << " (" << __func__ << " is called) ";
  return this->attackDamage;
}

// Setter
void ClapTrap::setName(std::string name) {
  std::cout << __func__ << "(" << name << ") is called\n";
  this->name = name;
}

void ClapTrap::setHitPoint(unsigned int hitPoint) {
  std::cout << __func__ << "(" << hitPoint << ") is called\n";
  this->hitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(unsigned int energyPoint) {
  std::cout << __func__ << "(" << energyPoint << ") is called\n";
  this->energyPoint = energyPoint;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
  std::cout << __func__ << "(" << attackDamage << ") is called\n";
  this->attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string& target) {
  if (hitPoint == 0) {  // attacker's HP == 0
    std::cout << this->name << " can't attack " << target << " " << this->name << "\'s HP is 0\n";
    this->attackDamage = 0;
  }
  else if (energyPoint == 0) {  // attacker's MP == 0
    std::cout << this->name << " can't attack " << target << " " << this->name << "\'s MP is 0\n";
    this->attackDamage = 0;
  }
  else {  // ATTACK!
    std::cout << this->name << " attacks " << target;
    --energyPoint;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->hitPoint == 0)  // already dead
    std::cout << ", but " << this->name << " is already dead\n";
  else {
    std::cout << ", causing " << amount << " points of damage! ";
    if (amount >= this->hitPoint)
      this->hitPoint = 0;
    else
      this->hitPoint -= amount;
    std::cout << "LEFT HP[" << this->hitPoint << "]";
    if (this->hitPoint == 0)
      std::cout << " " << this->name << " dead";
    std::cout << '\n';
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << this->name << " repairs itself BEFORE HP[" << this->hitPoint << "] amount[" << amount << "]";
  const unsigned int beforeHP = this->hitPoint;
  if (this->hitPoint + amount < beforeHP)
    this->hitPoint = UINT_MAX;
  else
    this->hitPoint += amount;
  std::cout << " AFTER HP[" << this->hitPoint << "]\n";
}
