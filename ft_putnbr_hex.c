/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:02:08 by mezahir           #+#    #+#             */
/*   Updated: 2025/11/05 15:42:33 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long int nb, char form)
{
	char	*base;
	int		count;

	count = 0;
	if (form == 'x')
		base = "0123456789abcdef";
	else if (form == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
	{
		count += ft_putchar(base[nb % 16]);
	}
	else
	{
		count += ft_putnbr_hex(nb / 16, form);
		count += ft_putnbr_hex(nb % 16, form);
	}
	return (count);
}
/*
int	main(void)
{
		ft_putnbr_hex(137,'X');
}
*/
