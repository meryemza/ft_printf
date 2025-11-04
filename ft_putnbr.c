/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:43:56 by mezahir           #+#    #+#             */
/*   Updated: 2025/11/04 12:52:08 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = nbr;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nb = -nbr;
	}
	if (nb < 10)
	{
		count += ft_putchar(nb + '0');
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	return (count);
}
/*
int	main(void)
{
	ft_putnbr(-235);
}
*/
