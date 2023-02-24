/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:46:49 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 17:02:00 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putchar_bonus(int c, t_flag *f)
{
	if (f->flag_m == 1)
		ft_cminus_bonus(c, f);
	else
	{
		write (1, &c, 1);
		f->res += 1;
	}
}

void	ft_char(int c, t_flag *f)
{
	write (1, &c, 1);
	f->res += 1;
}
