/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:04:26 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/18 13:44:44 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"PhoneBook.hpp"


int main()
{
    PhoneBook myphonebook;

    while(1)
    {
        std ::string command;
        std ::cout << "enter ur command please :)\n";
        std ::cin >> command;
        if(command.empty())
           break;
        if(command == "add")
        {
            myphonebook.add();
        }
        if(command == "search")
            myphonebook.search(1);
        if(command == "exit")
            break;
         //myphonebook.print();
    }

}