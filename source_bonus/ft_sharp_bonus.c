/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sharp_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:49:20 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/27 11:06:42 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_sharp_bonus(char *s, long long num, t_flag *f)
{
	if (f->flag_h == 1 && num != 0)
	{	
		if (s[15] == 'f')
			ft_putstr_bonus("0x", f);
		else
			ft_putstr_bonus("0X", f);
		f->flag_h = 0;
	}
	if (num >= 16)
		ft_sharp_bonus(s, num / 16, f);
	ft_putchar_bonus(s[num % 16], f);
}
