/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:29:35 by luifer            #+#    #+#             */
/*   Updated: 2024/12/01 16:31:01 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << GREEN << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << GREEN << "FragTrap constructor with name called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& input) : ClapTrap(input){
    std::cout << GREEN << "FragTrap copy constructor called" << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& input){
    if (this == &input){
		return (*this);	
	}
	ClapTrap::operator=(input);
	std::cout << GREEN << " FragTrap operator overload constructor called" << RESET << std::endl;
	return (*this);
}

FragTrap::~FragTrap(){
    std::cout << RED << this->name << " FragTrap is gonne 😿 😿 😿" << RESET << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << GREEN << this->name << " 🖐️ 🖐️ 🖐️ FragTrap is asking for a give me five pal 🖐️ 🖐️ 🖐️" << RESET << std::endl;
}