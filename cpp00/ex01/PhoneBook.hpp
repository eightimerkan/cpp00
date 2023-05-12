/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:27:37 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/12 05:44:24 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int     queue;
    public:
        PhoneBook(int queue);
        ~PhoneBook();
        void Add();
        void Search();
        void Exit();
        int ListContact();
        std::string printLen(std::string str);
        bool isNumber(const std::string& s);
};


#endif