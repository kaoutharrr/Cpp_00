/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:12:28 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/16 02:12:51 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
    std ::string FirstName;
    std ::string LastName;
    std ::string NickName;
    std ::string PhoneNumber;
    std ::string DarkestSecret;
    int index;

    public:
    void display(std ::string &FirstName, std ::string &LastName, std ::string &NickName
    , std ::string &PhoneNumber,std ::string &DarkestSecret);
        
};
#   endif