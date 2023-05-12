/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 02:46:42 by eightimerka       #+#    #+#             */
/*   Updated: 2023/03/17 04:27:06 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argv,char **args)
{
    if(argv == 4)
    {
        std::string myiofile = args[1];
        std::ifstream myinputfile(myiofile);

        if (myinputfile.is_open())
        {
            std::string myline;
            if (std::getline(myinputfile, myline, '\0'))
            {
                std::string s1 = args[2];
                std::string s2 = args[3];

                std::string outpufile = myiofile + ".replace";
                std::ofstream myoutput(outpufile);

                size_t pos = myline.find(s1);

                while(pos != std::string::npos)
                {
                    std::cout << pos << std::string::npos << std::endl;
                    myline.erase(pos, s1.length());
                    myline.insert(pos, s2);
                    pos = myline.find(s1);
                }
                std::cout << "burasi2";
                myoutput << myline;
                myoutput.close();
            }
            else
                std::cout << "File Empty" << std::endl;
            myinputfile.close();
        }
        else
            std::cout << "File not opened" << std::endl;

    }
    else
        std::cerr << "Wrong arguman number just 3 arguman (File no, string1, string2)" << std::endl;
    
    return 1;
}