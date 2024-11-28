/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:47 by luifer            #+#    #+#             */
/*   Updated: 2024/11/28 17:25:55 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    ClapTrap Krilin = ClapTrap("Krilin");
    ClapTrap Picoro = ClapTrap("Picoro");
    ScavTrap Goku = ScavTrap("Goku");
    ScavTrap Vegeta = ScavTrap("Vegeta");

    Krilin.attack("Vegeta");
    Picoro.takeDamage(2);
    Picoro.takeDamage(2);
    std::cout << GREEN << Picoro.getName() << " has this energy points so far:" << Picoro.getEnergyPoints() << "and this hit points: " << Picoro.getHitPoints() << RESET << std::endl;
    Picoro.beRepaired(4);
    std::cout << BLUE << Picoro.getName() << " has this energy points so far:" << Picoro.getEnergyPoints() << "and this hit points: " << Picoro.getHitPoints() << RESET << std::endl;

    Goku.attack("Vegeta");
    Vegeta.takeDamage(4);
    std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << "and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;
    Vegeta.attack("Krilin");
    Krilin.takeDamage(2);
    Krilin.takeDamage(2);
    std::cout << GREEN << Krilin.getName() << " has this energy points so far:" << Krilin.getEnergyPoints() << "and this hit points: " << Krilin.getHitPoints() << RESET << std::endl;
    Krilin.beRepaired(4);
    return (0);
}