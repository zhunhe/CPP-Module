/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:40:19 by juhur             #+#    #+#             */
/*   Updated: 2022/07/14 15:41:44 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap()
  : ClapTrap() {
  this->setHitPoint(100);
  this->setEnergyPoint(100);
  this->setAttackDamage(30);
  std::cout << "Default constructor " << __func__ << " is called\n";
}

// Constructor
FragTrap::FragTrap(std::string name)
  : ClapTrap(name) {
  this->setHitPoint(100);
  this->setEnergyPoint(100);
  this->setAttackDamage(30);
  std::cout << "Constructor " << __func__ << "(" << this->name << ") is called\n";
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& obj)
  : ClapTrap(obj) {
    std::cout << "Copy constructor " << __func__ << "(" << this->name << ") is called\n";
  *this = obj;
}

// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& obj) {
  std::cout << "Copy assignment operator(FragTrap) is called\n";
  this->name = obj.name;
  this->hitPoint = obj.hitPoint;
  this->energyPoint = obj.energyPoint;
  this->attackDamage = obj.attackDamage;
  return *this;
}

// Destructor
FragTrap::~FragTrap() {
  std::cout << "Destructor " << __func__ << "(" << this->name << ") is called\n";
}

void FragTrap::highFivesGuys() {
  std::cout << this->name << "(FragTrap) HIGH FIVE!!\n";
}
