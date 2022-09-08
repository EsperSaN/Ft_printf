/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:11:59 by pruenrua          #+#    #+#             */
/*   Updated: 2022/09/09 00:12:05 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nbr_base(long value, char *base)
{
	long	result;
	int		op_count;
	int		base_count;

	base_count = ft_strlen_f(base);
	op_count = 0;
	if (value == 0)
	{
		op_count += ft_putchar_f('0');
		return (op_count);
	}
	if (value < 0)
	{
		value = (value * -1);
		op_count += ft_putchar_f('-');
	}
	if (value >= base_count)
	{
		ft_nbr_base(value / base_count, base);
		value = value % base_count;
	}
	if (value < base_count)
		op_count += ft_putchar_f(base[(value % base_count)]);
	return (op_count);
}

int	ft_nbr_base_u(unsigned long value, char *base, int mode)
{
	unsigned long	result;
	int				op_count;
	int				base_count;

	base_count = ft_strlen_f(base);
	op_count = 0;
	if (mode == 1)
	{
		op_count += write(1, "0x", 2);
		mode = 0;
	}
	if (value == 0)
	{
		op_count += ft_putchar_f('0');
		return (op_count);
	}
	if (value >= base_count)
	{
		ft_nbr_base_u(value / base_count, base, mode);
		value = value % base_count;
	}
	if (value < base_count)
		op_count += ft_putchar_f(base[(value % base_count)]);
	return (op_count);
}
