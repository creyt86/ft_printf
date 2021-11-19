/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:31:45 by creyt             #+#    #+#             */
/*   Updated: 2021/11/18 17:16:36 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_c(char c, int *count);
void	ft_putnbr_d(int n, int *count);
void	ft_putnbr_i(int n, int *count);
void	ft_putnbr_u(unsigned int n, int *count);
void	ft_putstr_s(char *s, int *count);
void	ft_puthexa_x(unsigned long nb, int *count);
void	ft_puthexa_xx(unsigned long nb, int *count);

#endif
