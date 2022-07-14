/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:29:27 by juhur             #+#    #+#             */
/*   Updated: 2022/07/14 15:34:09 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
  ClapTrap anonymous;
  ScavTrap juhur("juhur");

  anonymous.attack(juhur.getName());
  juhur.takeDamage(anonymous.getAttackDamage());
  juhur.beRepaired(1000);

  juhur.attack(anonymous.getName());
  anonymous.takeDamage(juhur.getAttackDamage());
  juhur.guardGate();

  return 0;
}
