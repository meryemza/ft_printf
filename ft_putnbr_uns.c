/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:52:49 by mezahir           #+#    #+#             */
/*   Updated: 2025/11/04 15:01:17 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_uns(unsigned int nb)
{
    int count;

    count = 0;

    if(nb < 10)
    {
        count += ft_putchar(nb + '0');
    }
     else
    {
       count += ft_putnbr_uns(nb / 10);
       count += ft_putnbr_uns(nb % 10);  
    }
   return (count);
         
}
/*
int main()
{
ft_putnbr_uns(-12345);
    
}
*/