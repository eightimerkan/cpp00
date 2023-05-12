/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:26:47 by eightimerka       #+#    #+#             */
/*   Updated: 2023/03/16 22:27:38 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 4

int main() 
{
    Zombie *zombie = zombieHorde(N, "erkan");

    for (size_t i = 0; i < N; i++)
        zombie[i].announce();

    delete [] zombie;
    return 0;
}