/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:23:43 by mezahir           #+#    #+#             */
/*   Updated: 2025/11/03 23:33:01 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int data_type(va_list args,char *s)
{
    int count ;
    
    count = 0;
    
    if(*s == 'c')
        count += ft_putchar((char)va_arg(args,char));
    else if(*s == 's')
        count += ft_putstr(va_arg(args,char *));
    else if(*s == 'p')
        count += ft_putadr(va_arg(args,void *));
    else if(*s == 'd' || *s == 'i')
        count += ft_putnbr(va_arg(args,int));
    else if(*s == 'u')
        count += ft_putnbr_uns(va_arg(args,unsigned int));
    else if(*s == 'x' || *s == 'X')
        count += ft_putnbr_hex(va_arg(args,unsigned int));
    else if (*s == '%')
        count += ft_putchar('%'); 
    else
        count += ft_putchar(*s);
    
return (count);
}
int ft_printf(const char *txt, ...)
{
    int count;
    int i;
    va_list args;
    
    va_start(args,txt);
    i = 0;
    count = 0;
    while(txt)
    {
        if(txt[i] == '%')
        {
            i++;
            if(txt[i] == '\0')
                break;
            count += data_type(args,(char *)(txt + i));
        }
        else
            count += ft_putchar(txt[i]);
        i++;
    }
    va_end(args);
    return (count);   
}