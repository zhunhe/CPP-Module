/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:29:55 by juhur             #+#    #+#             */
/*   Updated: 2022/06/20 09:22:26 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_EX00_CLAPTRAP_
#define CPP03_EX00_CLAPTRAP_

#include <string>

class ClapTrap {
private:
  std::string name;
  unsigned int hitPoint;
  unsigned int energyPoint;
  unsigned int attackDamage;
public:
  // Default constructor
  ClapTrap();
  // Copy constructor
  ClapTrap(const ClapTrap& clapTrap);
  // Copy assignment operator
  ClapTrap& operator=(const ClapTrap& clapTrap);
  // Destructor
  ~ClapTrap();

  // Constructor
  ClapTrap(std::string name);

  // Getter
  const std::string& getName(void) const;
  const unsigned int& getHitPoint(void) const;
  const unsigned int& getEnergyPoint(void) const;
  const unsigned int& getAttackDamage(void) const;

  // Setter
  void setName(std::string name);
  void setHitPoint(unsigned int hitPoint);
  void setEnergyPoint(unsigned int energyPoint);
  void setAttackDamage(unsigned int attackDamage);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
#endif