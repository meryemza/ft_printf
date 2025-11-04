/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:49:46 by mezahir           #+#    #+#             */
/*   Updated: 2025/11/04 11:20:44 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(void *ptr)
{
    int count;
    int i;

    i = 0;
    count = 0;
    if(!ptr)
    {
        count += ft_putstr("(nil)");
      return (count);
    }
    count += ft_putstr("x0");
    while(ptr)
    {
        
        
    }
return(count);
}