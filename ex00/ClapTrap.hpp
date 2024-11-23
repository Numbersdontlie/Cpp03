/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:16:59 by luifer            #+#    #+#             */
/*   Updated: 2024/11/23 18:44:03 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>


#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define RESET "\033[0m"

class ClapTrap
{
    private:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public:
        ClapTrap();//default constructor
        ClapTrap(std::string Name);//constructor with name as parameter
        ClapTrap(const ClapTrap& input);//copy constructor
        
        ~ClapTrap();//destructor

        ClapTrap& operator = (const ClapTrap& input);//copy assignment operator overload

        //member functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //getters
        std::string getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;
};

#endif