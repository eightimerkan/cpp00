/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:11:41 by eightimerka       #+#    #+#             */
/*   Updated: 2023/03/17 01:22:14 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
    :name(name) 
{
    this->weapon = NULL;
}

HumanB::~HumanB()
{}

void    HumanB::setWeapon(Weapon& weapon) 
{
    this->weapon = &weapon;
}

void    HumanB::attack()const 
{
    if (this->weapon != NULL && this->weapon->getType() != "") 
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << name << " doesn't have a weapon to attack." << std::endl;
}
