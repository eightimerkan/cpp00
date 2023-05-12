/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:28:34 by eightimerka       #+#    #+#             */
/*   Updated: 2023/03/16 22:11:27 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    public:
        Zombie(std::string const& _Name);
        ~Zombie();
        void announce( void );
    private:
        std::string Name;
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif