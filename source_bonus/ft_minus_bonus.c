/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:51:11 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/27 11:05:28 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_minus_bonus(long long num, t_flag *f)
{
	int		p;

	p = f->atoi - ft_numlong_bonus(num);
	if (num < 0)
	{
		ft_char('-', f);
		num *= -1;
	}
	ft_nbr_bonus(num, f);
	if (f->flag_m == 1)
	{
		while (--p >= 0)
			ft_char(' ', f);
	}
	f->flag_m = 0;
}

void	ft_cminus_bonus(char c, t_flag *f)
{
	f->flag_m = 0;
	ft_putchar_bonus(c, f);
	while (--f->atoi > 0)
		ft_putchar_bonus(' ', f);
}

void	ft_strminus_bonus(char *s, t_flag *f)
{
	int		i;

	f->flag_m = 0;
	i = -1;
	while (s[++i])
		write (1, &s[i], 1);
	f->atoi -= i;
	while (--f->atoi >= 0)
		ft_putchar_bonus(' ', f);
	f->res += i;
}

void	ft_hminus_bonus(unsigned long long num, char *s, t_flag *f)
{
	int		p;

	p = f->atoi - ft_hnumlong_bonus(num);
	ft_hnbr_bonus(num, s, f);
	if (f->flag_m == 1)
	{
		while (--p >= 0)
			ft_char(' ', f);
	}
	f->flag_m = 0;
}
