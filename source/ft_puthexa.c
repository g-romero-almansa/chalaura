/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:28:36 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/01 17:06:46 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

void	ft_puthexa(unsigned long long num, int *res)
{
	if (num >= 16)
		ft_puthexa(num / 16, res);
	ft_putchar("0123456789abcdef"[num % 16], res);
}
