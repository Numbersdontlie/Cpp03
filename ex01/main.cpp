/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:47 by luifer            #+#    #+#             */
/*   Updated: 2024/12/01 16:23:05 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    //ClapTrap Krilin = ClapTrap("Krilin");
    //ClapTrap Picoro = ClapTrap("Picoro");
    ScavTrap Goku = ScavTrap("Goku");
    ScavTrap Vegeta = ScavTrap("Vegeta");

    //Krilin.attack("Vegeta");
    //Picoro.takeDamage(2);
    //Picoro.takeDamage(2);
    //std::cout << GREEN << Picoro.getName() << " has this energy points so far:" << Picoro.getEnergyPoints() << "and this hit points: " << Picoro.getHitPoints() << RESET << std::endl;
    //Picoro.beRepaired(4);
    //std::cout << BLUE << Picoro.getName() << " has this energy points so far:" << Picoro.getEnergyPoints() << "and this hit points: " << Picoro.getHitPoints() << RESET << std::endl;

    Goku.attack("Vegeta");
    Vegeta.takeDamage(4);
    std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << " and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;
    Vegeta.beRepaired(4);
	std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << " and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;
	Vegeta.attack("Goku");
    Goku.takeDamage(2);
    Goku.takeDamage(2);
	Goku.guardGate();
	Vegeta.guardGate();
    std::cout << GREEN << Goku.getName() << " has this energy points so far:" << Goku.getEnergyPoints() << " and this hit points: " << Goku.getHitPoints() << RESET << std::endl;
    return (0);
}