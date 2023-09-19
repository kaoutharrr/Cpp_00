/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:47:41 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/19 19:54:07 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <iostream>
#include<iomanip>
#include <string>
void PhoneBook::print()
{  
    int i = 0;
    std :: cout << std :: setw(10) << "index" << "|" << std ::setw(10) <<
    "first name" << "|" << std :: setw(10) << " last name" << "|" << std ::setw(10)
    << "nick name" << std  :: endl;
    std :: cout << std :: setw(10) << "-----" << "|" << std ::setw(10) <<
    "----------" << "|" << std :: setw(10) << "---------" << "|" << std ::setw(10)
    << "---------" << std  :: endl;
    while(i <index)
    {
        contacts[i].display();
        i++;
    } 
}

void  PhoneBook::add()
{
    std::cout<<"please enter the following information for the new contact :\n";
    std ::string First, Last, Name, Number, Secret;
    Contact newContact;
    std ::cout << "first name : ";
    std ::cin>> First ;
    if(First.empty())
    {
        std :: cout <<"A saved contact can’t have empty fields \n";
        return;
    }
    std :: cout << "last name : ";
    std :: cin >> Last;
    std :: cout << " nick name  :";
    std :: cin >> Name;
    std :: cout << "phone number : ";
    std :: cin >> Number;
    std :: cout << "darkest secret :";
    std :: cin >>  Secret;
   newContact.init(First, Last, Name, Number, Secret, index);
    if(index < 8)
    {
        contacts[index] = newContact;
        index++;
    }
    else
        contacts[index] = newContact;
    std::cout << "\033[35m";
    std :: cout << "contact saved succussflly 😃\n";
     std::cout << "\033[0m";
}
void  PhoneBook:: search(int i)
{
   // (void)index;
    print();
    std ::cout << "enter the index of your conatact please :)";
   std ::cin >> i;
   
    while(i < 0 || i >= index)
    {
        std :: cerr << "invalid index try again please :)\n";
         std ::cin >> i;
    }
    contacts[i].fields();
}