/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:42:09 by eightimerka       #+#    #+#             */
/*   Updated: 2023/03/16 22:07:56 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce( void )
{
    std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string const& Name)
    : Name(Name)
{}

Zombie::~Zombie()
{
    std::cout << "Destructor!!\nName: " << Name << std::endl;
}