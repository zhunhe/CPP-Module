/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:29:27 by juhur             #+#    #+#             */
/*   Updated: 2022/07/14 15:27:59 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
  ClapTrap anonymous;
  ClapTrap juhur("juhur");

  anonymous.setAttackDamage(11);

  anonymous.attack(juhur.getName());
  juhur.takeDamage(anonymous.getAttackDamage());
  juhur.beRepaired(1000);

  juhur.attack(anonymous.getName());
  anonymous.takeDamage(juhur.getAttackDamage());

  return 0;
}
