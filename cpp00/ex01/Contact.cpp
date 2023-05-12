/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:43:08 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/12 06:38:53 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setName(std::string name)
{
    this->name = name;
}
void    Contact::setSurname(std::string surname)
{
    this->surname = surname;
}
void    Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}
void    Contact::setDarks(std::string darkestsecret)
{
    this->darkestsecret = darkestsecret;
}
void    Contact::setNumber(std::string number)
{
    this->number = number;
}
std::string Contact::getName()
{
    return this->name;
}
std::string Contact::getSurname()
{
     return this->surname;   
}
std::string Contact::getNickname()
{
     return this->nickname;   
}
std::string Contact::getDarks()
{
     return this->darkestsecret;
}
std::string Contact::getNumber()
{
     return this->number;   
}