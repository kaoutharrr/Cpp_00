/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:08:50 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/24 17:39:12 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int index = 0;
        int old = 0;
    public:
        void   print();
        void    add();
        void    search();
};
#   endif