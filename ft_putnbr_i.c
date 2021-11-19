/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:21:51 by creyt             #+#    #+#             */
/*   Updated: 2021/11/18 17:18:01 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_i(int nb, int *count)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
		ft_putchar_c(nb + '0', count);
	else if (nb < 0)
	{
		ft_putchar_c('-', count);
		ft_putnbr_i(nb * (-1), count);
	}
	else
	{
		ft_putnbr_i(nb / 10, count);
		ft_putnbr_i(nb % 10, count);
	}
}
