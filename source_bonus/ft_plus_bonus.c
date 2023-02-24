/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:05:07 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/20 13:12:40 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_plus_bonus(long long num, t_flag *f)
{
	if (num < 0 && f->flag_p == 1)
	{
		ft_putchar_bonus('-', f);
		num *= -1;
	}
	else if (f->flag_p == 1)
		ft_putchar_bonus('+', f);
	f->flag_p = 0;
	if (num >= 10)
		ft_plus_bonus(num / 10, f);
	ft_putchar_bonus((num % 10) + '0', f);
}
