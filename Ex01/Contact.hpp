/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:12:28 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/19 19:54:43 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
class Contact
{
    private:
    std ::string FirstName;
    std ::string LastName;
    std ::string NickName;
    std ::string PhoneNumber;
    std ::string DarkestSecret;
    int index = 0;

    public:
    void init(std ::string &First, std ::string &Last, std ::string &Name
    , std ::string &Number,std ::string &Secret, int index);
    void display();
    void fields();
        
};
#   endif

/*
void  Contact::init(std ::string &First, std ::string &Last, std ::string &Name
    , std ::string &Number,std ::string &Secret)
{
    First = FirstName;
    Last = LastName ;
    Name = NickName ;
    Number = PhoneNumber;
    // std ::cout << "First Name :" << FirstName << "\n";
    // std ::cout << "Last Name :" << LastName << "\n";
    // std ::cout << "NickName :" << NickName << "\n";
    // std ::cout << "Phone Number :" << PhoneNumber << "\n";

}
*/