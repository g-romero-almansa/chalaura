/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:20:55 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/27 10:28:02 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putnbr_bonus(int x, t_flag *f)
{
	long long	num;

	num = x;
	if (f->flag_p == 1)
		ft_plus_bonus(num, f);
	if (f->flag_es == 1)
		ft_space_bonus(num, f);
	if (f->flag_z == 1)
		ft_zero_bonus(num, f);
	if (f->flag_pot == 1)
		ft_dot_bonus(num, f);
	if (f->flag_m == 1)
		ft_minus_bonus(num, f);
}
