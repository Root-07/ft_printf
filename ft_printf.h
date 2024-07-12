/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:53:09 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/27 18:15:24 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<stdarg.h>
# include<unistd.h>
# include<limits.h>

int		ft_printf(const char *content, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr_unsigned(unsigned int n, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putstr(char *str, int *len);
void	ft_puthexa(unsigned int n, int *len, char c);
void	ft_putaddr(void *add, int *len);

#endif