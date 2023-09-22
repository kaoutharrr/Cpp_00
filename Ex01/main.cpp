/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:04:26 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/23 00:10:15 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<limits>
#include"PhoneBook.hpp"


int main()
{
    PhoneBook myphonebook;
   // int a = 1;
    while(1)
    {
    //     std ::string command;
    //     std ::cout << "enter ur command please :)\n";
    //      std ::cin >> command;;
    //     if(std ::cin.fail())
    //     {
    //         a = 0;
    //       std::cout << "Please enter a valid command.\n";
    //         // Clear the input buffer
    //         std::cin.clear();
    //         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //        // std ::cout << "enter ur command please :)\n";
    //     //std ::cin >> command;
    //        // break;
    //         //continue;
    //    }
          std::string input;
        std::cout << "enter ur command please :)\n";

        // Attempt to read a line of input
        if (!std::getline(std::cin, input)) {
            // EOF (Ctrl+D) was encountered, so exit the loop gracefully
            break;
        }

        // Trim leading and trailing spaces
        input.erase(0, input.find_first_not_of(" \t"));
        input.erase(input.find_last_not_of(" \t") + 1);

        // Check if the input is empty
        if (input.empty()) {
            std::cout << "Please enter a valid command.\n";
            continue; // Ask for a new command
        }
        std::string command = input.substr(0, input.find(' '));
       if(command == "ADD")
        {
            myphonebook.add();
        }
       else if(command == "SEARCH")
            myphonebook.search(1);
      else   if(command == "EXIT")
            break; 
     
        //    continue;
    }

}