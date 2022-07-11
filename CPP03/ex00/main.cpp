/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:29:27 by juhur             #+#    #+#             */
/*   Updated: 2022/07/11 06:31:15 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include "ClapTrap.hpp"

int main() {
  ClapTrap anonymous;
  ClapTrap juhur("juhur");

  anonymous.attack(juhur.getName());
  juhur.takeDamage(anonymous.getAttackDamage());
  juhur.beRepaired(1000);

  ClapTrap cadet1;
  cadet1.beRepaired(UINT_MAX);
  return 0;
}
