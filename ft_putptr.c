/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:49:46 by mezahir           #+#    #+#             */
/*   Updated: 2025/11/05 17:14:38 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_putnbr_hex((unsigned long int)ptr, 'x');
	return (count);
}
/*
int	main(void)
{
	int	*p;

  p = NULL;
  ft_putptr(p);
}
*/