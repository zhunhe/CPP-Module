/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:29:27 by juhur             #+#    #+#             */
/*   Updated: 2022/07/14 15:43:43 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
  ClapTrap anonymous;
  ScavTrap juhur("juhur");
  FragTrap juhur2("juhur2");

  juhur.attack(juhur2.getName());
  juhur2.takeDamage(juhur.getAttackDamage());
  juhur2.beRepaired(10000);

  juhur2.attack(juhur.getName());
  juhur.takeDamage(juhur2.getAttackDamage());
  juhur2.highFivesGuys();

  return 0;
}
