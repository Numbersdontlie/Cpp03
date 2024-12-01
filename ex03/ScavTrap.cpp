/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:56:55 by luifer            #+#    #+#             */
/*   Updated: 2024/12/01 15:45:17 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap (){
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << GREEN << "ScavTrap from default constructor created" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << GREEN << "ScavTrap with constructor with name created" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& input) : ClapTrap(input){
    std::cout << GREEN << "ScavTrap with copy constructor created" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &input){
    if(this != &input){
    	ClapTrap::operator=(input);
	}
	std::cout << GREEN << "ScavTrap with assignation operator created" << RESET << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << RED << this->_name << " is gonne 😿 😿 😿" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if(this->_energy_points && this->_hit_points){
        this->_energy_points--;
        std::cout << BLUE << this->_name << " attacked🤺 🤺 🤺 " << target << " generating this: " << this->_attack_damage << " points of damage 🤕 🤕 🤕" << std::endl;
    }
    else if(!_energy_points && _hit_points)
        std::cout << RED << this->_name << "is a tired warrior 😪 😪 😪 no energy to attack 🪫 🪫 🪫 :( " << RESET << std::endl;
    else
        std::cout << RED << this->_name << " doesn't have more hit points 🌟 🌟 🌟" << RESET << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << BLUE << this->_name << " is now in Gate Keeper mode 🛡️ 🛡️ 🛡️" << RESET << std::endl;
}
