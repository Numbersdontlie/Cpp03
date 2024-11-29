/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:44:07 by luifer            #+#    #+#             */
/*   Updated: 2024/11/23 22:53:20 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default constructor
ClapTrap::ClapTrap(){
    this->name = "No Name";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << BLUE << "ClapTrap object created" << RESET << std::endl;
}

//Constructor with name as parameter
ClapTrap::ClapTrap(std::string name){
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << BLUE << "ClapTrap object with name created" << RESET << std::endl;
}

//Copy constructor
ClapTrap::ClapTrap (const ClapTrap& input){
    this->name = input.name;
    this->hitPoints = input.hitPoints;
    this->energyPoints = input.energyPoints;
    this->attackDamage = input.attackDamage;
    std::cout << BLUE << "Object from copy constructor created" << RESET << std::endl;
}

//Operator overload constructor
ClapTrap& ClapTrap::operator=(const ClapTrap &input){
    if(this != &input){
        this->name = input.name;
        this->hitPoints = input.hitPoints;
        this->energyPoints = input.energyPoints;
        this->attackDamage = input.attackDamage;
        std::cout << BLUE << "Object from operator constructor created" << RESET << std::endl;
    }
    return *this;
}

//Destructor
ClapTrap::~ClapTrap(void) {
    std::cout << RED << "Object destroyed!" << RESET << std::endl;
}

//Function to attack, it checks if the energy and hit points required to attack are present
void ClapTrap::attack(const std::string& target){
    if(this->energyPoints && this->hitPoints){
        this->energyPoints--;
        std::cout << BLUE << this->name << " attacked🤺 🤺 🤺 " << target << " generating this: " << this->attackDamage << " points of damage 🤕 🤕 🤕" << std::endl;
    }
    else if(!energyPoints && hitPoints)
        std::cout << GREEN << this->name << "is a tired warrior 😪 😪 😪 no energy to attack 🪫 🪫 🪫 :( " << RESET << std::endl;
    else
        std::cout << RED << this->name << " doesn't have more hit points 🌟 🌟 🌟" << RESET << std::endl;
}

//Function to receive damage from oponent, it checks if the object have enough hit point
//to receive the damage from attack.
void ClapTrap::takeDamage(unsigned int amount){
    if(this->hitPoints >= amount){
        this->hitPoints -= amount;
        std::cout << RED << this->name << "lost: " << amount << " of hit points 🎯 🎯 🎯" << RESET << std::endl;
    }
    else{
        this->hitPoints = 0;
        std::cout << RED << this->name << "have no more hit points left 😿 😿 😿" << RESET << std::endl;
    }
}

//Function to repair the ClapTrap object, when healing a cost of 1 energy point will be taxed
//this will be added to the hitPoints 
void ClapTrap::beRepaired(unsigned int amount){
    if(this->energyPoints && this->hitPoints){
        this->energyPoints--;
        this->hitPoints += amount;
        std::cout << GREEN << this->name << "healed himself 💉 💉 💉, it will get: " << amount << " hit points in his conto!" << RESET << std::endl;
    }
    else
        std::cout << BLUE << this->name << "have no energy points to heal himself" << RESET << std::endl;
}

//Getters
std::string ClapTrap::getName(void) const {return (this->name);}
unsigned int ClapTrap::getHitPoints(void) const {return (this->hitPoints);}
unsigned int ClapTrap::getEnergyPoints(void) const {return (this->energyPoints);}
unsigned int ClapTrap::getAttackDamage(void) const {return (this->attackDamage);}

