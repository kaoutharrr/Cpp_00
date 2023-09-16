/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:47:41 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/16 03:23:25 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::print()
{   
    std::cout<<"hello  u wanted to print\n";
}

void  PhoneBook::add()
{
    std::cout<<"hello  u wanted to ADD\n";
}
void  PhoneBook:: search(int index){
    std::cout<<"hello  u wanted to SEARCH\n";
    std::cin >> index;
    std ::cout <<"index : "<< index;
}