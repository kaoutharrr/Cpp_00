/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:47:41 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/26 03:15:56 by kkouaz           ###   ########.fr       */
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
    std ::string First, Last, Name, Secret;
    int Number;
    Contact newContact;
    std ::cout << "first name : ";
    std ::getline(std::cin, First);
     if (std::cin.eof()) {
        std::cout << "EOF encountered. Exiting add function.\n";
        std::cin.ignore();
        return;
    }
    while (First.empty()) {
        std::cout << "A saved contact can't have empty fields.\n";
        std ::cout << "first name : ";
        std ::getline(std::cin, First);
          if (std::cin.eof()) {
        std::cout << "EOF encountered. Exiting add function.\n";
       
        return;
        //return;
    }
     std::cin.ignore();
   // ;
    std :: cout << "last name : ";
    std ::getline(std ::cin , Last);
    if (std::cin.eof()) {
        std::cout << "EOF encountered. Exiting add function.\n";
        std::cin.ignore();
        return;
    }
    while (Last.empty()) {
        std::cout << "A saved contact can't have empty fields.\n";
        std ::cout << "last name : ";
        std ::getline(std::cin, Last);
        if (std::cin.eof()) {
        std::cout << "EOF encountered. Exiting add function.\n";
        std::cin.ignore();
        return;
        }
        //return;
    }  
    std :: cout << "nickname  :";
    std ::getline(std ::cin , Name);

    if (std::cin.eof()) 
    {
        std::cout << "EOF encountered. Exiting add function.\n";
        std::cin.ignore();
        return;
    }
    while (Name.empty()) {
        std::cout << "A saved contact can't have empty fields.\n";
        std ::cout << "nickname : ";
        std ::getline(std::cin, Name);
        //return;
    }

    std :: cout << "phone number : ";
    std::cin >> Number;
   // std ::getline(s);
    while(std :: cin.fail())
    {
        std::cout << "Please enter a correct Phone number\n";
        std::cin.clear();            // Clear error flags
        std::cin.ignore(100, '\n');
        std :: cout << "phone number : ";
        std :: cin >> Number;
    }
    
    std :: cout << "darkest secret :";
    std :: cin >>  Secret;
    newContact.init(First, Last, Name, Number, Secret, index);
    if(index < 8)
    {
        contacts[index] = newContact;
        index++;
    }
    else
    {
        newContact.update(old);
        contacts[old] = newContact;
        old++; 
        if(old == 8)
            old = 0;
    }
   
    std::cout << "\033[35m";
    std :: cout << "contact saved succussflly 😃\n";
     std::cout << "\033[0m";
}
}
void  PhoneBook:: search()
{
    int i;
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