/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:29:19 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/27 21:26:24 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(char c, va_list ap, int *len)
{
	if (c == '%')
		ft_putchar('%', len);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), len);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), len);
	else if (c == 'p')
		ft_putaddr(va_arg(ap, void *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), len);
	else if (c == 'x' || c == 'X')
		ft_puthexa(va_arg(ap, unsigned int), len, c);
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(ap, unsigned int), len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		i;

	va_start(ap, str);
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_check(str[i], ap, &len);
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	return (len);
}
