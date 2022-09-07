/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eszu <eszu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:11:20 by pruenrua          #+#    #+#             */
/*   Updated: 2022/09/07 22:06:24 by eszu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_nbr_base(int value, char *base)
{
    long    result;
    int     op_count;
    int     base_count;

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
        ft_print_nbr_base(value / base_count,base);
        value = value % base_count;
    }
    if (value < base_count)
        op_count += ft_putchar_f(base[(value % base_count)]);
    //value = (value / base_count);

    return (op_count);
}

int ft_print_nbr_base_u(unsigned long value, char *base)
{
    unsigned long    result;
    int              op_count;
    int              base_count;

    base_count = ft_strlen_f(base);
    op_count = 0;
    if (value == 0)
        op_count += ft_putchar_f('0');
    while (value)
    {
        op_count += ft_putchar_f(base[(value % base_count)]);
        value = (value / base_count);
    }
    return (op_count);
}