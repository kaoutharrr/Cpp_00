/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:44:54 by kkouaz            #+#    #+#             */
/*   Updated: 2023/09/07 22:12:18 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int ac, char **av)
{
    char a;
    int i, j;
    i = 1;
    j = 0;
    if(av[1] == NULL)
    {
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    } 
    while(i < ac)
    {
        j = 0;
     
        while(av[i][j])
        {
            if(av[i][j] >= 'a' && av[i][j] <= 'z')
                a = av[i][j] - ('a' - 'A');
            else
                a = av[i][j];
            std ::cout << a;
            j++;
        }
    i++;
    }
    return(0);
}