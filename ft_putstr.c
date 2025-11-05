/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:43:00 by mezahir           #+#    #+#             */
/*   Updated: 2025/11/05 11:46:04 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}
/*
int	main(void)
{
	printf("%d\n",ft_putstr("meryem"));
		printf("%d\n",ft_putstr(NULL));
}
*/
