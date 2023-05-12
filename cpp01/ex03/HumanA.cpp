/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:11:52 by eightimerka       #+#    #+#             */
/*   Updated: 2023/03/17 01:17:33 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) 
    : name(name), weapon(weapon)
    {}

HumanA::~HumanA()
    {}

void    HumanA::attack() const 
{
    if (this->weapon.getType() != "") 
        std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
    else
        std::cout << name << " doesn't have a weapon to attack." << std::endl;
}