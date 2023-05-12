/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:42:54 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/12 04:12:04 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string UpperString(std::string choose)
{
    for(size_t i = 0; i < choose.size(); i++)
        choose[i] = toupper(choose[i]);
    return choose; 
}


int main()
{
    PhoneBook Phone(0);
    std::string    choose ;
    std::cout << "Please enter a command (ADD || SEARCH || EXIT)" << std::endl;
    while(std::getline(std::cin,choose))
    {
        if(UpperString(choose) == "ADD")
            Phone.Add();
        else if(UpperString(choose) == "SEARCH")
            Phone.Search();
        else if(UpperString(choose) == "EXIT")
            break;
        else
            std::cout << "Wrong arguman!!" << std::endl;
        std::cout << "Please enter a command just (ADD || SEARCH || EXIT)" << std::endl ;
    }
    return 0;
}