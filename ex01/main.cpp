/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:47 by luifer            #+#    #+#             */
/*   Updated: 2024/12/02 10:48:45 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    
	ScavTrap Goku = ScavTrap("Goku");
    ScavTrap Vegeta = ScavTrap("Vegeta");

    Goku.attack("Vegeta");
    Vegeta.takeDamage(20);
    std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << " and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;
    Vegeta.beRepaired(20);
	std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << " and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;
	Vegeta.attack("Goku");
    Goku.takeDamage(20);
    Goku.takeDamage(20);
	Goku.beRepaired(20);
	Goku.beRepaired(20);
	Goku.guardGate();
	Vegeta.guardGate();
    std::cout << GREEN << Goku.getName() << " has this energy points so far:" << Goku.getEnergyPoints() << " and this hit points: " << Goku.getHitPoints() << RESET << std::endl;
    return (0);
}
