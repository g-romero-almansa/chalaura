/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthnbr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:42:26 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 16:25:49 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_puthnbr_bonus(unsigned int x, char *s, t_flag *f)
{
	if (f->flag_h == 1)
		ft_sharp_bonus(s, (long long)x, f);
	if (f->flag_z == 1)
		ft_hzero_bonus((long long)x, s, f);
	if (f->flag_pot == 1)
		ft_hdot_bonus((long long)x, s, f);
}
