/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:29:13 by creyt             #+#    #+#             */
/*   Updated: 2021/11/18 17:17:21 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_xx(unsigned long nb, int *count)
{
	unsigned long	hex;
	int				letter;

	letter = 'A';
	if (nb > 0)
	{
		ft_puthexa_xx(nb / 16, count);
		hex = nb % 16;
		if (hex > 9)
			ft_putchar_c(hex + letter - 10, count);
		else
			ft_putchar_c(hex + '0', count);
	}
}
