/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:29:12 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/16 02:12:18 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void  Contact::display(std ::string &FirstName, std ::string &LastName, std ::string &NickName
    , std ::string &PhoneNumber,std ::string &DarkestSecret)
{
    std ::cout << "First Name :" << FirstName << "\n";
    std ::cout << "Last Name :" << LastName << "\n";
    std ::cout << "NickName :" << NickName << "\n";
    std ::cout << "Phone Number :" << PhoneNumber << "\n";
}