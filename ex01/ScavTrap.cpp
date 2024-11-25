/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:56:55 by luifer            #+#    #+#             */
/*   Updated: 2024/11/26 00:05:18 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ClapTrap(){
    this->name = "no name";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << GREEN << "ScavTrap from default constructor created" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << GREEN << "ScavTrap with constructor with name created" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& input) : ClapTrap(input){
    std::cout << GREEN << "ScavTrap with copy constructor created" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &input){
    if(this != &input){
        static_cast<ClapTrap&>(*this) = src;
        std::cout << GREEN << "Object from operator constructor created" << RESET << std::endl;
    }
}

ScavTrap::~ScavTrap(){
    std::cout << RED << this->name << "is gonne 😿 😿 😿" << RESET << std::endl;
}

void attack(const std::string &target){
    if(this->energyPoints && this->hitPoints){
        this->energyPoints--;
        std::cout << BLUE << this->name << " attacked🤺 🤺 🤺 " << target << " generating this: " << this->attackDamage << " points of damage 🤕 🤕 🤕" << std::endl;
    }
    else if(!energyPoints && hitPoints)
        std::cout << RED << this->name << "is a tired warrior 😪 😪 😪 no energy to attack 🪫 🪫 🪫 :( " << RESET << std::endl;
    else
        std::cout << RED << this->name << " doesn't have more hit points 🌟 🌟 🌟" << RESET << std::endl;
}

void guardGate(){
    std::cout << BLUE << this->name << " is now in Gate Keeper mode" << RESET << std::endl;
}
