/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:31:04 by creyt             #+#    #+#             */
/*   Updated: 2021/11/19 10:16:14 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_type(int i, const char *str, va_list ap, int *count)
{
	if (str[i] == 'c')
		ft_putchar_c(va_arg(ap, int), count);
	else if (str[i] == 's')
		ft_putstr_s(va_arg(ap, char *), count);
	else if (str[i] == 'p')
		ft_puthexa_p(va_arg(ap, unsigned long));
	else if (str[i] == 'd')
		ft_putnbr_d(va_arg(ap, int), count);
	else if (str[i] == 'i')
		ft_putnbr_i(va_arg(ap, int), count);
//	else if (str[i] == 'u')
//		ft_put_u_nb(va_arg(ap, unsigned int));
	else if (str[i] == 'x')
		ft_puthexa_x(va_arg(ap, unsigned long), count);
	else if (str[i] == 'X')
		ft_puthexa_xx(va_arg(ap, unsigned long), count);
	i++;
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_c(str[i], &count);
		else
		check_type(i, str, ap, &count);
		i++;
	}
	va_end(ap);
	return (count);
}

/*int	main()
{
	ft_printf("%d\n", 'c');
}*/
