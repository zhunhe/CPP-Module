/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:35:33 by juhur             #+#    #+#             */
/*   Updated: 2022/07/20 04:37:40 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap()
  : name("anonymous")
  , hitPoint(10)
  , energyPoint(10)
  , attackDamage(0) {
  std::cout << "Default constructor is called\n";
}

// Constructor
ClapTrap::ClapTrap(std::string name)
  : name(name)
  , hitPoint(10)
  , energyPoint(10)
  , attackDamage(0) {
  std::cout << "Constructor is called\n";
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& obj) {
  std::cout << "Copy constructor is called\n";
  *this = obj;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
  std::cout << "Copy assignment operator is called\n";
  this->name = obj.name;
  this->hitPoint = obj.hitPoint;
  this->energyPoint = obj.energyPoint;
  this->attackDamage = obj.attackDamage;
  return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
  std::cout << "Destructor is called\n";
}

// Getter & Setter
const std::string& ClapTrap::getName(void) const { return this->name; }
const unsigned int& ClapTrap::getHitPoint(void) const { return this->hitPoint; }
const unsigned int& ClapTrap::getEnergyPoint(void) const { return this->energyPoint; }
const unsigned int& ClapTrap::getAttackDamage(void) const { return this->attackDamage; }

void ClapTrap::setName(std::string name) {
  std::cout << __func__ << "() is called " << this->name << " -> " << name << std::endl;
  this->name = name;
}

void ClapTrap::setHitPoint(unsigned int hitPoint) {
  std::cout << __func__ << "() is called " << this->hitPoint << " -> " << hitPoint << std::endl;
  this->hitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(unsigned int energyPoint) {
  std::cout << __func__ << "() is called " << this->energyPoint << " -> " << energyPoint << std::endl;
  this->energyPoint = energyPoint;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
  std::cout << __func__ << "() is called " << this->attackDamage << " -> " << attackDamage << std::endl;
  this->attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string& target) {
  if (this->hitPoint == 0) {  // ATTACKER's HP is 0
    std::cout << this->name << " is already dead. " << target;
    this->attackDamage = 0;
  } else if (this->energyPoint == 0) {  // ATTACKER's EP is 0
    std::cout << this->name << " doesn't have enough energy. " << target;
    this->attackDamage = 0;
  } else {  // ATTACK !!
    std::cout << this->name << " attacks " << target;
    --this->energyPoint;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->hitPoint == 0)
    std::cout << ", but " << this->name << " is already dead\n";
  else {
    std::cout << ", causing " << amount << " points of damage!\n";
    if (amount >= this->hitPoint)
      this->hitPoint = 0;
    else
      this->hitPoint -= amount;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->hitPoint == 0) {
    std::cout << this->name << " is already dead. can't repair\n";
    return;
  }
  if (this->energyPoint == 0) {
    std::cout << this->name << " doesn't have enough energy. can't repair\n";
    return;
  }
  const unsigned int beforeHP = this->hitPoint;
  if (beforeHP > this->hitPoint + amount)
    this->hitPoint = UINT_MAX;
  else
    this->hitPoint += amount;
  --this->energyPoint;
  std::cout << this->name << " HP UP " << this->hitPoint - beforeHP << '\n';
}
