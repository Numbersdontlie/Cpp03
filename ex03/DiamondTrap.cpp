/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:39:28 by luifer            #+#    #+#             */
/*   Updated: 2024/12/01 15:56:01 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Function to create object with default constructor
DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
    this->_name = "no name";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << GREEN << "DiamondTrap" << this->_name << " Created from default constructor"<< RESET << std::endl;
}

//Function to create object with name in the constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << GREEN << "DiamondTrap" << this->_name << " Created giving a name to the constructor"<< RESET << std::endl;
}

//Function to create object with copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& input) : ClapTrap(input), FragTrap(input), ScavTrap(input), _name(input._name){
    std::cout << BLUE << "Diamond Trap " << this->_name << " created as copy constructor" << RESET << std::endl;
}

//Function to create object with operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& input){
    if (this == &input)
        return *this;
    ClapTrap::operator=(input);
    this->_name = input._name;
    std::cout << BLUE << "DiamondTrap created with copy assignment operator" << RESET << std::endl;
    return *this;
}

//Destructor
DiamondTrap::~DiamondTrap(void){
    std::cout<< RED << "DiamondTrap " << this->_name << "Was destroyed 😿 😿 😿" << RESET << std::endl;
}

//Function to display the 2 names of the object (inheritance)
void DiamondTrap::whoAmI(void){
    std::cout << GREEN << "Hi Folks, I am" << this->_name << " and my Clappy Trappy 😎 😎 😎 name is:" << ClapTrap::_name << RESET << std::endl; 
}
