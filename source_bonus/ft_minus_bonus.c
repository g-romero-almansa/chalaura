/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:51:11 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 17:55:20 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_minus_bonus(long long num, t_flag *f)
{
	int		p;

	p = 0;
	if (num < 0)
	{
		num *= -1;
		p = f->atoi - ft_numlong_bonus(num) + 1;
		while (--p >= 0)
			ft_char(' ', f);
		ft_char('-', f);
	}
	else if (f->flag_m == 1)
	{
		p = f->atoi - ft_numlong_bonus(num);
		while (--p >= 0)
			ft_char(' ', f);
	}
	f->flag_m = 0;
	if (num >= 10)
		ft_minus_bonus(num / 10, f);	
	ft_char((num % 10) + '0', f);
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
	int i;

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
	(void)num;
	(void)s;
	(void)f;
}
