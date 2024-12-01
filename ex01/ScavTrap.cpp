/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:56:55 by luifer            #+#    #+#             */
/*   Updated: 2024/12/01 16:32:29 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
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
    if(this == &input){
        return (*this);
    }
	ClapTrap::operator=(input);
	std::cout << GREEN << "Object from operator constructor created" << RESET << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << RED << this->name << " ScavTrap is gonne 😿 😿 😿" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if(this->energyPoints && this->hitPoints){
        this->energyPoints--;
        std::cout << BLUE << this->name << " ScavTrap attacked🤺 🤺 🤺 " << target << " generating this: " << this->attackDamage << " points of damage 🤕 🤕 🤕" << std::endl;
    }
    else if(!energyPoints && hitPoints)
        std::cout << RED << this->name << "is a tired warrior 😪 😪 😪 no energy to attack 🪫 🪫 🪫 :( " << RESET << std::endl;
    else
        std::cout << RED << this->name << " doesn't have more hit points 🌟 🌟 🌟" << RESET << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << BLUE << this->name << " is now in Gate Keeper mode " << RESET << std::endl;
}
