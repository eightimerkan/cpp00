/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:42:57 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/12 06:48:34 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{   
    public:
        std::string getName();
        std::string getSurname();
        std::string getNickname();
        std::string getDarks();
        std::string getNumber();
        void        setName(std::string name);
        void        setSurname(std::string surname);
        void        setNickname(std::string nickname);
        void        setDarks(std::string darkestsecret);
        void        setNumber(std::string number);

    private:
        std::string name;
        std::string surname;
        std::string nickname;
        std::string darkestsecret;
        std::string number;
};

#endif