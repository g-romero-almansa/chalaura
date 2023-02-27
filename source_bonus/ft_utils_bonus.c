/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:30:11 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/27 11:07:08 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

int	ft_numlong_bonus(long long num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	if (num == 0)
		i++;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

int	ft_hnumlong_bonus(long long num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	if (num == 0)
		i++;
	while (num)
	{
		num /= 16;
		i++;
	}
	return (i);
}

void	ft_atoi_bonus(char const *s, t_flag *f)
{
	f->atoi = 0;
	while (s[f->i] >= '0' && s[f->i] <= '9')
	{
		f->atoi = (f->atoi * 10) + (s[f->i] - '0');
		f->i++;
	}
}

void	ft_nbr_bonus(long long num, t_flag *f)
{
	if (num >= 10)
		ft_nbr_bonus((num / 10), f);
	ft_char((num % 10) + '0', f);
}

void	ft_hnbr_bonus(unsigned long long num, char *s, t_flag *f)
{
	if (num >= 16)
		ft_hnbr_bonus((num / 16), s, f);
	ft_char (s[num % 16], f);
}
