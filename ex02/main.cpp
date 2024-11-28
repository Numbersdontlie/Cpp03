/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:47 by luifer            #+#    #+#             */
/*   Updated: 2024/11/28 17:50:54 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
    ClapTrap Krilin("Krilin");
    ClapTrap Picoro("Picoro");
    ScavTrap Android1("Android1");
    ScavTrap Android2("Android2");
    FragTrap Goku("Goku");
    FragTrap Vegeta("Vegeta");

    Krilin.attack("Picoro");
    Picoro.takeDamage(2);
    std::cout << GREEN << Picoro.getName() << " has this energy points so far:" << Picoro.getEnergyPoints() << "and this hit points: " << Picoro.getHitPoints() << RESET << std::endl;
    Picoro.beRepaired(2);
    std::cout << BLUE << Picoro.getName() << " has this energy points so far:" << Picoro.getEnergyPoints() << "and this hit points: " << Picoro.getHitPoints() << RESET << std::endl;

    Android1.attack("Goku");
    Goku.takeDamage(20);
    std::cout << GREEN << Goku.getName() << " has this energy points so far:" << Goku.getEnergyPoints() << "and this hit points: " << Goku.getHitPoints() << RESET << std::endl;
    Goku.beRepaired(15);
    std::cout << BLUE << Goku.getName() << " has this energy points so far:" << Goku.getEnergyPoints() << "and this hit points: " << Goku.getHitPoints() << RESET << std::endl;
    Android2.attack("Vegeta");
    Vegeta.takeDamage(20);
    std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << "and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;

    Goku.attack("Android1");
    Android1.takeDamage(30);
    std::cout << GREEN << Android1.getName() << " has this energy points so far:" << Android1.getEnergyPoints() << "and this hit points: " << Android1.getHitPoints() << RESET << std::endl;
    Vegeta.attack("Android2");
    Android2.takeDamage(30);
    std::cout << GREEN << Android2.getName() << " has this energy points so far:" << Android2.getEnergyPoints() << "and this hit points: " << Android2.getHitPoints() << RESET << std::endl;
    Goku.highFivesGuys();
    Vegeta.highFivesGuys();
    return (0);
}