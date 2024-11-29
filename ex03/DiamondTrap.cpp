/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:39:28 by luifer            #+#    #+#             */
/*   Updated: 2024/11/29 14:31:49 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Function to create object with default constructor
DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
    this->name = "no name";
    ClapTrap::name = name + "clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << GREEN << "DiamondTrap" << this->name << " Created from default constructor"<< RESET << std::endl;
}

//Function to create object with name in the constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << GREEN << "DiamondTrap" << this->name << " Created giving a name to the constructor"<< RESET << std::endl;
}

//Function to create object with copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& input) : ClapTrap(input), ScavTrap(input), FragTrap(input) {
    std::cout << BLUE << "Diamond Trap " << this->name << " created as copy constructor" << RESET << std::endl;
}

//Function to create object with operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& input){
    if (this == &input)
        return *this;
    ClapTrap::operator=(input);
    this->name = input.name;
    std::cout << BLUE << "DiamondTrap created with copy assignment operator" << RESET << std::endl;
    return *this;
}

//
DiamondTrap::~DiamondTrap(void){
    std::cout<< RED << "DiamondTrap " << this->name << "Was destroyed 😿 😿 😿" << RESET << std::endl;
}

//Function to display the 2 names of the object (inheritance)
void DiamondTrap::whoAmI(void){
    std::cout << GREEN << "Hi Folks, I am" << this->name << " and my Clappy Trappy 😎 😎 😎 name is:" << ClapTrap::name << RESET << std::endl; 
}
