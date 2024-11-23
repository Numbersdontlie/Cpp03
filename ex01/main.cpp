/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:47 by luifer            #+#    #+#             */
/*   Updated: 2024/11/23 21:35:10 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap Goku = ClapTrap("Goku");
    ClapTrap Vegeta = ClapTrap("Vegeta");
    ClapTrap Alguien;

    Goku.attack("Vegeta");
    Vegeta.takeDamage(2);
    Vegeta.takeDamage(2);
    std::cout << GREEN << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << "and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;
    Vegeta.beRepaired(4);
    std::cout << BLUE << Vegeta.getName() << " has this energy points so far:" << Vegeta.getEnergyPoints() << "and this hit points: " << Vegeta.getHitPoints() << RESET << std::endl;

    Alguien.attack("Goku");
    Goku.takeDamage(1);
    std::cout << GREEN << Goku.getName() << " has this energy points so far:" << Goku.getEnergyPoints() << "and this hit points: " << Goku.getHitPoints() << RESET << std::endl;
    return (0);
}