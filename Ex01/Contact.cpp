/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:29:12 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/19 19:54:57 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>


void  Contact::display()
{
    std ::cout << std :: setw(10) << index  << "|";
    std ::cout << std ::setw(10) <<FirstName << "|";
    std ::cout << std ::setw(10) << LastName << "|" ;
    std ::cout << std ::setw(10)  << NickName << "\n" ;
}

void  Contact::init(std ::string &First, std ::string &Last, std ::string &Name
    , std ::string &Number,std ::string &Secret, int i)
{
    FirstName = First;
    LastName = Last ;
    NickName = Name ;
    PhoneNumber = Number ;
    DarkestSecret = Secret;
    index = i;
}
void  Contact::fields()
{
    std ::cout << "first name :  " << FirstName << "\n";
    std ::cout << "last name  : " << LastName << "\n" ;
    std ::cout << "nick name  : " << NickName << "\n" ;
    std ::cout << "phone number : " << PhoneNumber << "\n";
}