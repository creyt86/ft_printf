/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:45:10 by creyt             #+#    #+#             */
/*   Updated: 2021/11/18 17:21:25 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *count)
{
	if (n >= 0 && n <= 9)
		ft_putchar_c((n + '0'), count);
	else
	{
		ft_putnbr_u(n / 10, count);
		ft_putnbr_u(n % 10, count);
	}
	return ;
}
