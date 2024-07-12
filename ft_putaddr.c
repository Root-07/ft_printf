/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:40:40 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/28 15:13:13 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned long long nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
	{
		ft_putchar(base[nbr], len);
	}
	else
	{
		ft_hexa((nbr / 16), len);
		ft_hexa((nbr % 16), len);
	}
}

void	ft_putaddr(void *p, int *len)
{
	ft_putstr("0x", len);
	ft_hexa((unsigned long long)p, len);
}
