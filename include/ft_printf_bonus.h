/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:26:43 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/23 17:16:26 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_flag
{
	int		flag_p;
	int		flag_es;
	int		flag_h;
	int		flag_m;
	int		flag_z;
	int		flag_pot;
	int		i;
	int		res;
	int		atoi;
}	t_flag;

int		ft_printf(char const *s, ...);

void	ft_init_bonus(t_flag *f);

void	ft_format_bonus(char const *s, t_flag *f, va_list arg);

void	ft_format_flags_bonus(char const *s, t_flag *f);

void	ft_putchar_bonus(int c, t_flag *f);

void	ft_putstr_bonus(char *s, t_flag *f);

void	ft_putvoid_bonus(unsigned long long p, t_flag *f);

void	ft_putnbr_bonus(int x, t_flag *f);

void	ft_putunbr_bonus(unsigned int x, t_flag *f);

void	ft_puthnbr_bonus(unsigned int x, char *s, t_flag *f);

void	ft_plus_bonus(long long num, t_flag *f);

void	ft_space_bonus(long long num, t_flag *f);

void	ft_strspace_bonus(t_flag *f);

void	ft_sharp_bonus(char *s, long long num, t_flag *f);

void	ft_zero_bonus(long long  num, t_flag *f);

void	ft_hzero_bonus(long long  num, char *s, t_flag *f);

void	ft_dot_bonus(long long num, t_flag *f);

void	ft_sdot_bonus(char *s, t_flag *f);

void	ft_hdot_bonus(long long num, char *s, t_flag *f);

void	ft_minus_bonus(long long num, t_flag *f);

void	ft_cminus_bonus(char c, t_flag *f);

void	ft_strminus_bonus(char *s, t_flag *f);

void	ft_char(int c, t_flag *f);

void	ft_putstr(char *s, t_flag *f);

void	ft_hminus_bonus(unsigned long long num, char *s, t_flag *f);

int		ft_numlong_bonus(long long num);

int		ft_hnumlong_bonus(long long num);

void	ft_atoi_bonus(char const *s, t_flag *f);

#endif
