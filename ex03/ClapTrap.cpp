/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:44:07 by luifer            #+#    #+#             */
/*   Updated: 2024/12/02 11:05:16 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default constructor
ClapTrap::ClapTrap() : _name("No name"), _hit_points(10), _energy_points(10), _attack_damage(0){
    //this->hitPoints = 10;
    //this->energyPoints = 10;
    //this->attackDamage = 0;
    std::cout << BLUE << " ClapTrap default object created" << RESET << std::endl;
}

//Constructor with name as parameter
ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){
    //this->hitPoints = 10;
    //this->energyPoints = 10;
    //this->attackDamage = 0;
    std::cout << BLUE << " ClapTrap object with name created" << RESET << std::endl;
}

//Copy constructor
ClapTrap::ClapTrap (const ClapTrap& input): _name(input._name), _hit_points(input._hit_points), _energy_points(input._energy_points), _attack_damage(input._attack_damage){
    //this->name = input.name;
    //this->hitPoints = input.hitPoints;
    //this->energyPoints = input.energyPoints;
    //this->attackDamage = input.attackDamage;
    std::cout << BLUE << " ClapTrap object from copy constructor created" << RESET << std::endl;
}

//Operator overload constructor
ClapTrap& ClapTrap::operator=(const ClapTrap &input){
    if(this != &input){
        this->_name = input._name;
        this->_hit_points = input._hit_points;
        this->_energy_points = input._energy_points;
        this->_attack_damage = input._attack_damage;
        std::cout << BLUE << " ClapTrap object from operator constructor created" << RESET << std::endl;
    }
    return *this;
}

//Destructor
ClapTrap::~ClapTrap(void) {
    std::cout << RED << this->_name << " ClapTrap Has been destroyed!" << RESET << std::endl;
}

//Function to attack, it checks if the energy and hit points required to attack are present
void ClapTrap::attack(const std::string& target){
    if(this->_energy_points && this->_hit_points){
        this->_energy_points--;
        std::cout << BLUE << this->_name << " attacked🤺 🤺 🤺 " << target << " generating this: " << this->_attack_damage << " points of damage 🤕 🤕 🤕" << std::endl;
    }
    else if(!_energy_points && _hit_points)
        std::cout << GREEN << this->_name << " is a tired warrior 😪 😪 😪 no energy to attack 🪫 🪫 🪫 :( " << RESET << std::endl;
    else
        std::cout << RED << this->_name << " doesn't have more hit points 🌟 🌟 🌟" << RESET << std::endl;
}

//Function to receive damage from oponent, it checks if the object have enough hit point
//to receive the damage from attack.
void ClapTrap::takeDamage(unsigned int amount){
    if(this->_hit_points >= amount){
        this->_hit_points -= amount;
        std::cout << RED << this->_name << " lost: " << amount << " of hit points 🎯 🎯 🎯" << RESET << std::endl;
    }
    else{
        this->_hit_points = 0;
        std::cout << RED << this->_name << " have no more hit points left 😿 😿 😿" << RESET << std::endl;
    }
}

//Function to repair the ClapTrap object, when healing a cost of 1 energy point will be taxed
//this will be added to the hitPoints 
void ClapTrap::beRepaired(unsigned int amount){
    if(this->_energy_points && this->_hit_points){
        this->_energy_points--;
        this->_hit_points += amount;
        std::cout << GREEN << this->_name << " healed himself 💉 💉 💉, it will get: " << amount << " hit points in his conto!" << RESET << std::endl;
    }
    else
        std::cout << BLUE << this->_name << " have no energy points to heal himself" << RESET << std::endl;
}

//Getters
std::string ClapTrap::getName(void) const {return (this->_name);}
unsigned int ClapTrap::getHitPoints(void) const {return (this->_hit_points);}
unsigned int ClapTrap::getEnergyPoints(void) const {return (this->_energy_points);}
unsigned int ClapTrap::getAttackDamage(void) const {return (this->_attack_damage);}

