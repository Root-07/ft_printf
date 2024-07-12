/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:07:48 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/27 18:44:50 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *len)
{
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
