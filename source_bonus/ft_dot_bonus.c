/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:27:03 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 16:45:15 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_dot_bonus(long long num, t_flag *f)
{
	int p;

	p = 0;
	if (num < 0)
	{
		ft_putchar_bonus('-', f);
		num *= -1;
		p = f->atoi - ft_numlong_bonus(num);
		while (--p >= 0)
			ft_putchar_bonus('0', f);
	}
	else if (f->flag_pot == 1)
	{
		p = f->atoi - ft_numlong_bonus(num);
		while (--p >= 0)
			ft_putchar_bonus('0', f);
	}
	f->flag_pot = 0;
	if (num >= 10)
		ft_dot_bonus(num / 10, f);
	ft_putchar_bonus((num % 10) + '0', f);
}

void	ft_hdot_bonus(long long num, char *s, t_flag *f)
{
	int p;

	p = 0;
	if (num < 0)
	{
		ft_putchar_bonus('-', f);
		num *= -1;
		p = f->atoi - ft_hnumlong_bonus(num);
		while (--p >= 0)
			ft_putchar_bonus('0', f);
	}
	else if (f->flag_pot == 1)
	{
		p = f->atoi - ft_hnumlong_bonus(num);
		while (--p >= 0)
			ft_putchar_bonus('0', f);
	}
	f->flag_pot = 0;
	if (num >= 16)
		ft_hdot_bonus(num / 16, s, f);
	ft_putchar_bonus(s[num % 16], f);
}

void	ft_sdot_bonus(char *s, t_flag *f)
{
	int		i;

	i = -1;
	f->flag_pot = 0;
	while (s[++i] && --f->atoi >= 0)
		write (1, &s[i], 1);
	f->res += i;
}
