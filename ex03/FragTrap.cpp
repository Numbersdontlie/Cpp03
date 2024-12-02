/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:29:35 by luifer            #+#    #+#             */
/*   Updated: 2024/12/02 11:05:36 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Default constructor
FragTrap::FragTrap() : ClapTrap(){
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << GREEN << " FragTrap default constructor called" << RESET << std::endl;
}

//Constructor with name as parameter
FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << GREEN << name <<" FragTrap constructor with name called" << RESET << std::endl;
}

//Copy constructor
FragTrap::FragTrap(const FragTrap& input) : ClapTrap(input){
    std::cout << GREEN << " FragTrap copy constructor called" << RESET << std::endl;
}

//Operator overload constructor
FragTrap& FragTrap::operator=(const FragTrap& input){
    if (this == &input)
		return (*this);
    ClapTrap::operator=(input);
	std::cout << GREEN << " FragTrap operator overload constructor called" << RESET << std::endl;
	return (*this);
}

//Destructor
FragTrap::~FragTrap(){
    std::cout << RED << this->_name << " FragTrap is gonne 😿 😿 😿" << RESET << std::endl;
}

//High five
void FragTrap::highFivesGuys(void){
    std::cout << GREEN << this->_name << " 🖐️ 🖐️ 🖐️ FragTrap is asking for a give me five pal 🖐️ 🖐️ 🖐️" << RESET << std::endl;
}