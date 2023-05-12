/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:27:35 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/12 05:49:36 by eightimerka      ###   ########.fr       */
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
    int control = 0;
    while(!control)
    {
        std::cout << "Please enter you first name: " << std::flush;
        std::getline(std::cin,contacts[queue % 8].name);
        if(contacts[queue % 8].name.empty())
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
        std::getline(std::cin,contacts[queue % 8].surname);
        if(contacts[queue % 8].surname.empty())
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
        std::getline(std::cin,contacts[queue % 8].nickname);
        if(contacts[queue % 8].nickname.empty())
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
        std::getline(std::cin,contacts[queue % 8].number);
        if(contacts[queue % 8].number.empty())
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
        std::getline(std::cin,contacts[queue % 8].darkestsecret);
        if(contacts[queue % 8].darkestsecret.empty())
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
    if(!(contacts[0].name.empty()))
    {
        std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl;
        for(int i = 0; i < 8; i++)
        {

            std::cout << "|" << std::setw(10) << i;
            std::cout << "|" << std::setw(10) << this->printLen(contacts[i].name);
            std::cout << "|" << std::setw(10) << this->printLen(contacts[i].surname);
            std::cout << "|" << std::setw(10) << this->printLen(contacts[i].nickname);
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
            if(contacts[i].name.empty())
            {
                std::cout << "Empty index number   " << std::endl;
                return;
            }
            std::cout << "--------Contact Index-------- " << std::endl;
            std::cout << "First Name : " << contacts[i].name <<  std::endl;
            std::cout << "SurName : " << contacts[i].surname << std::endl;
            std::cout << "NickName : " << contacts[i].nickname << std::endl;
            std::cout << "Darkest Secret" << contacts[i].darkestsecret << std::endl;
            std::cout << "Phone Number" << contacts[i].number << std::endl;
        }
        else
            std::cout << "Wrong arguman number  " << std::endl;
    }
    else
        std::cout << "!!! Phonebook Empty !!!  " << std::endl;
    return ;
}
