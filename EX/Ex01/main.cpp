/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:04:26 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/29 05:44:12 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<limits>
#include <fstream> 
#include"PhoneBook.hpp"


int main()
{
    PhoneBook myphonebook;
    while(1)
    {
        std::string command; 
        if(std::cin.eof())
            break;
        std::cout << "enter ur command please :)\n";
        std ::getline(std :: cin , command);
        if(command == "ADD")
        {
            myphonebook.add();
            //std ::cin.ignore();
        }
        else if(command == "SEARCH")
        {
            myphonebook.search();
             //std ::cin.ignore();
        }
        else   if(command == "EXIT")
            break;  

    }

}