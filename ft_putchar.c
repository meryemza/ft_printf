/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:24:58 by mezahir           #+#    #+#             */
/*   Updated: 2025/11/04 10:56:35 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_putchar(char c)
{
    int count;

    count = 0;
    count += write(1,&c,1);
    
    return (count);  
}
/*
int main()
{
printf ("%d\n",ft_putchar('m'));  
 printf ("%d\n",ft_putchar('a'));  
}
 */
