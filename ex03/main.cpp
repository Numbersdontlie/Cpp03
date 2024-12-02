/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:47 by luifer            #+#    #+#             */
/*   Updated: 2024/12/02 11:07:36 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap Goku("Goku");
	DiamondTrap Vegeta("Vegeta");

	std::cout << GREEN << " Goku has " << Goku.getHitPoints() << " amount of hit points " << RESET << std::endl;
    std::cout<< GREEN << " Goku has " << Goku.getEnergyPoints() << " amount of energy " << RESET << std::endl;
    std::cout<< GREEN << " Goku has " << Goku.getAttackDamage() << " amount of attack damage " << RESET << std::endl;

	Goku.attack("Vegeta");
	Vegeta.takeDamage(30);
	Vegeta.guardGate();
    std::cout << BLUE << " Goku has " << Goku.getHitPoints() << " amount of hit points " << Goku.getEnergyPoints() << " Energy points"<< RESET << std::endl;
    std::cout << BLUE << " Vegeta has " << Vegeta.getHitPoints() << " amount of hit points " << Vegeta.getEnergyPoints() << " Energy points"<< RESET << std::endl;

	Goku.whoAmI();
	Vegeta.whoAmI();

	DiamondTrap Gohan(Goku);
	Gohan.whoAmI();
	Gohan.guardGate();
	std::cout << GREEN << " Gohan has " << Gohan.getHitPoints() << " amount of hit points " << RESET << std::endl;
    std::cout<< GREEN << " Gohan has " << Gohan.getEnergyPoints() << " amount of energy " << RESET << std::endl;
    std::cout<< GREEN << " Gohan has " << Gohan.getAttackDamage() << " amount of attack damage " << RESET << std::endl;

	Gohan = Vegeta;
	Gohan.whoAmI();
	Gohan.guardGate();
	std::cout << GREEN << " Gohan has " << Gohan.getHitPoints() << " amount of hit points " << RESET << std::endl;
    std::cout<< GREEN << " Gohan has " << Gohan.getEnergyPoints() << " amount of energy " << RESET << std::endl;
    std::cout<< GREEN << " Gohan has " << Gohan.getAttackDamage() << " amount of attack damage " << RESET << std::endl;

	Gohan = Goku;
	Gohan.whoAmI();
	std::cout << GREEN << " Gohan has " << Gohan.getHitPoints() << " amount of hit points " << RESET << std::endl;
    std::cout<< GREEN << " Gohan has " << Gohan.getEnergyPoints() << " amount of energy " << RESET << std::endl;
    std::cout<< GREEN << " Gohan has " << Gohan.getAttackDamage() << " amount of attack damage " << RESET << std::endl;
}