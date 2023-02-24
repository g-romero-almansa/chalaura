/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:20:57 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/22 10:47:07 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_space_bonus(long long num, t_flag *f)
{
	if (num < 0)
	{
		ft_putchar_bonus('-', f);
		num *= -1;
	}
	else if (f->flag_es == 1)
		ft_putchar_bonus(' ', f);
	if (num >= 10)
		ft_plus_bonus(num / 10, f);
	ft_putchar_bonus((num % 10) + '0', f);
}

void	ft_strspace_bonus(t_flag *f)
{
	f->flag_es = 0;
	while (--f->atoi >= 0)
		ft_putchar_bonus(' ', f);
}
