/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:08:50 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/02 06:46:21 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int index ;
        int old ;
    public:
        PhoneBook();
        void   init();
        void   print();
        void    add();
        void    search();
};
#   endif