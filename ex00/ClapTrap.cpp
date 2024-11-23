/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:44:07 by luifer            #+#    #+#             */
/*   Updated: 2024/11/23 18:57:58 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): {}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
}

//Getters
void ClapTrap::getName() {return (Name);}
unsigned int ClapTrap::getHitPoints() {return (hitPoints);}
unsigned int ClapTrap::getEnergyPoints() {return (energyPoints);}
unsigned int ClapTrap::getAttackDamage() {return (attackDamage);}


