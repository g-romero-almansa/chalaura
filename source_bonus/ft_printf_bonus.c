/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:21:29 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 17:55:05 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_format_flags_bonus(char const *s, t_flag *f)
{
	while (s[f->i] == '+' || s[f->i] == ' ' || s[f->i] == '#'
		|| s[f->i] == '0' || s[f->i] == '.' || s[f->i] == '-'
		|| (s[f->i] >= '0' && s[f->i] <= '9'))
	{
		if (s[f->i] == '+')
		{
			f->flag_p = 1;
			f->i++;
		}
		else if (s[f->i] == ' ')
		{
			f->flag_es = 1;
			f->i++;
			ft_atoi_bonus(s, f);
		}
		else if (s[f->i] == '#')
		{	
			f->flag_h = 1;
			f->i++;
		}
		else if (s[f->i] == '0')
		{
			f->flag_z = 1;
			ft_atoi_bonus(s, f);
		}
		else if (s[f->i] == '.')
		{
			f->flag_pot = 1;
			f->i++;
			ft_atoi_bonus(s, f);
		}
		else if (s[f->i] == '-')
		{
			f->flag_m = 1;
			f->i++;
			ft_atoi_bonus(s, f);
		}
		else if (s[f->i] > '0' && s[f->i] <= '9')
		{
			f->flag_m = 1;
			ft_atoi_bonus(s, f);
		}
	}
}


void	ft_format_bonus(char const *s, t_flag *f, va_list arg)
{
	++f->i;
	ft_format_flags_bonus(s, f);
	if (s[f->i] == 'c')
		ft_putchar_bonus(va_arg(arg, int), f);
	else if (s[f->i] == 's')
		ft_putstr_bonus(va_arg(arg, char *), f);
	else if (s[f->i] == 'p')
	{
		ft_putstr_bonus("0x", f);
		ft_putvoid_bonus(va_arg(arg, unsigned long long), f);
	}
	else if (s[f->i] == 'd' || s[f->i] == 'i')
		ft_putnbr_bonus(va_arg(arg, int), f);
	else if (s[f->i] == 'u')
		ft_putunbr_bonus(va_arg(arg, unsigned int), f);
	else if (s[f->i] == 'x')
		ft_puthnbr_bonus(va_arg(arg, unsigned int), "0123456789abcdef", f);
	else if (s[f->i] == 'X')
		ft_puthnbr_bonus(va_arg(arg, unsigned int), "0123456789ABCDEF", f);
	else if (s[f->i] == '%')
		ft_putchar_bonus('%', f);
}

void	ft_init_bonus(t_flag *f)
{
	f->res = 0;
	f->i = -1;
	f->flag_p = 0;
	f->flag_es = 0;
	f->flag_h = 0;
	f->flag_m = 0;
	f->flag_z = 0;
	f->flag_pot = 0;
	f->atoi = 0;
}

int	ft_printf(char const *s, ...)
{
	t_flag	*f;
	va_list	arg;

	f = malloc(sizeof(t_flag));
	if (!f)
		return (0);
	ft_init_bonus(f);
	va_start(arg, s);
	while (s[++f->i])
	{
		if (s[f->i] == '%')
			ft_format_bonus(s, f, arg);
		else
			ft_putchar_bonus(s[f->i], f);
	}
	va_end(arg);
	free (f);
	return (f->res);
}
/*#include <limits.h>
int	main(void)
{
	ft_printf("%-2d\n", 11);
	printf("%-2d\n", 11);
}*/
