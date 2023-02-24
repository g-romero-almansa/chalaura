/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:03:03 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 17:11:21 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putvoid_bonus(unsigned long long p, t_flag *f)
{
	/*if (f->flag_m == 1)
	{
		ft_hminus_bonus(p, "0123456789abcdef", f);
	}
	else
	{*/
		if (p >= 16)
			ft_putvoid_bonus(p / 16, f);
		ft_putchar_bonus("0123456789abcdef"[p % 16], f);
	//}
}
