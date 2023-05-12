/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:27:35 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/12 06:51:48 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int queue)
{
    this->queue = queue;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Object created, used and destroyed" << std::endl;
}

void PhoneBook::Add()
{
    std::string name;
    std::string surname;
    std::string nickname;
    std::string darkestsecret;
    std::string number;
    int control = 0;
    while(!control)
    {
        std::cout << "Please enter you first name: " << std::flush;
        std::getline(std::cin,name);
        contacts[queue % 8].setName(name);
        if(name.empty())
        {
            std::cin.clear(); 
            std::cout << "Please Enter a value " << std::endl;
        }
        else
            control = 1;
    }
    control = 0;
    while(!control)
    {
        std::cout << "Please enter you surname: " << std::flush;
        std::getline(std::cin,surname);
        contacts[queue % 8].setSurname(surname);
        if(surname.empty())
        {
            std::cin.clear(); 
            std::cout << "Please Enter a value " << std::endl;
        }
        else
            control = 1;
    }
    control = 0;
    while(!control)
    {
        std::cout << "Please enter you nickname: " << std::flush;
        std::getline(std::cin,nickname);
        contacts[queue % 8].setNickname(nickname);
        if(nickname.empty())
        {
            std::cin.clear(); 
            std::cout << "Please Enter a value " << std::endl;
        }
        else
            control = 1;
    }
    control = 0;
    while(!control)
    {
        std::cout << "Please enter you number: " << std::flush;
        std::getline(std::cin,number);
        contacts[queue % 8].setNumber(number);
        if(number.empty())
        {
            std::cin.clear(); 
            std::cout << "Please Enter a value " << std::endl;
        }
        else
            control = 1;
    }
    control = 0;
    while(!control)
    {
        std::cout << "Please enter you darkestsecret: ";
        std::getline(std::cin,darkestsecret);
        contacts[queue % 8].setDarks(darkestsecret);
        if(darkestsecret.empty())
        {
            std::cin.clear(); 
            std::cout << "Please Enter a value " << std::endl;
        }
        else
            control = 1;
    }
    queue++;
    return;
}

std::string PhoneBook::printLen(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

int PhoneBook::ListContact()
{
    if(!(contacts[0].getName().empty()))
    {
        std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl;
        for(int i = 0; i < 8; i++)
        {

            std::cout << "|" << std::setw(10) << i;
            std::cout << "|" << std::setw(10) << this->printLen(contacts[i].getName());
            std::cout << "|" << std::setw(10) << this->printLen(contacts[i].getSurname());
            std::cout << "|" << std::setw(10) << this->printLen(contacts[i].getNickname());
            std::cout << "|" << std::endl;
        }
        return 1;
    }
    return 0;
}

bool PhoneBook::isNumber(const std::string& s)
{
    size_t i = 0;
    while(i < s.size())
    {
        if (std::isdigit(s[i++]) == 0) 
            return false;
    }
    return true;
}

void PhoneBook::Search()
{
    int i;
    std::string j;
    if (ListContact())
    {
        std::cout << "Please enter to index number -->>" << std::flush;
        std::getline(std::cin,j);
        if(isNumber(j) != 1)
        {
            std::cout << "Please enter just number" << std::endl;
            return ;
        }
        i = std::stoi(j);
        if(i >= 0 && i < 8)
        {
            if(contacts[i].getName().empty())
            {
                std::cout << "Empty index number   " << std::endl;
                return;
            }
            std::cout << "--------Contact Index-------- " << std::endl;
            std::cout << "First Name : " << contacts[i].getName() <<  std::endl;
            std::cout << "SurName : " << contacts[i].getSurname() << std::endl;
            std::cout << "NickName : " << contacts[i].getNickname() << std::endl;
            std::cout << "Darkest Secret" << contacts[i].getDarks() << std::endl;
            std::cout << "Phone Number" << contacts[i].getNumber() << std::endl;
        }
        else
            std::cout << "Wrong arguman number  " << std::endl;
    }
    else
        std::cout << "!!! Phonebook Empty !!!  " << std::endl;
    return ;
}
