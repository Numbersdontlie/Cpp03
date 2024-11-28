/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:20:18 by luifer            #+#    #+#             */
/*   Updated: 2024/11/28 09:29:20 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define GREEN "\e[1;92m"
#define RESET "\033[0m"

class FragTrap : public ClapTrap()
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& input);
        FragTrap &operator=(const FragTrap& input);
        ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
