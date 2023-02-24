/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:54:36 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 17:07:04 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putstr_bonus(char *s, t_flag *f)
{
	int		i;

	i = -1;
	if (f->flag_es == 1)
		ft_strspace_bonus(f);
	if (f->flag_pot == 1)
		ft_sdot_bonus(s, f);
	else if (f->flag_m == 1)
		ft_strminus_bonus(s, f);
	else
	{
		while (s[++i])
			write (1, &s[i], 1);
		f->res += i;
	}
}

void	ft_putstr(char *s, t_flag *f)
{
	int		i;

	i = -1;
	while (s[++i])
		write (1, &s[i], 1);
	f->res += i;
}
