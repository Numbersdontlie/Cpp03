/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:47 by luifer            #+#    #+#             */
/*   Updated: 2024/12/02 10:57:08 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
  
    FragTrap Goku("Goku");
    FragTrap Vegeta("Vegeta");

   
    Vegeta.attack("Goku");
    Goku.takeDamage(30);
    std::cout << GREEN << Goku.getName() << " has this energy points so far:" << Goku.getEnergyPoints() << "and this hit points: " << Goku.getHitPoints() << RESET << std::endl;
    Goku.beRepaired(30);
    std::cout << BLUE << Goku.getName() << " has this energy points so far:" << Goku.getEnergyPoints() << "and this hit points: " << Goku.getHitPoints() << RESET << std::endl;
    Goku.attack("Vegeta");
    Vegeta.takeDamage(30);
    std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << "and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;

    Goku.attack("Vegeta");
    Vegeta.takeDamage(30);
    std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << "and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;
    Vegeta.attack("Goku");
    Goku.takeDamage(30);
    std::cout << GREEN << Goku.getName() << " has this energy points so far:" << Goku.getEnergyPoints() << "and this hit points: " << Goku.getHitPoints() << RESET << std::endl;
    Goku.highFivesGuys();
    Vegeta.highFivesGuys();
    return (0);
}