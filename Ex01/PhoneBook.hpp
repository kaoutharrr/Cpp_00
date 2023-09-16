/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:08:50 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/16 02:47:29 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
    public:
        void   print();
        void    add();
        void    search(int index);
};
#   endif