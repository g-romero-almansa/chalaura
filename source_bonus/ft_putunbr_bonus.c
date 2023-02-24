/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:35:47 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 16:19:51 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putunbr_bonus(unsigned int x, t_flag *f)
{
	if (f->flag_z == 1)
		ft_zero_bonus((long long )x, f);
	if (f->flag_pot == 1)
		ft_dot_bonus((long long)x, f);
}
