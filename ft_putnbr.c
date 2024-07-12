/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:14:44 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/27 18:44:13 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n == INT_MIN)
	{
		ft_putchar('-', len);
		ft_putchar((2 + 48), len);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr((n / 10), len);
		ft_putnbr((n % 10), len);
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar((n + 48), len);
	}
}
