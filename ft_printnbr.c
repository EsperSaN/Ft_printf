/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eszu <eszu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:11:20 by pruenrua          #+#    #+#             */
/*   Updated: 2022/09/07 00:40:06 by eszu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_strlen_f(char *str)
{
    int  len;

    len = 0;
    while(*str)
    {
        str++;
        len++;
    }
    return (len);
}

int ft_putchar_f(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstring_f(char *str)
{
    int op_count;

    op_count = 0;
    while (*str)
    {
        op_count += ft_putchar_f(str);
        str++;
    }
    return (op_count);
}

int ft_print_nbr_base(long value, char *base)
{
    long    result;
    int     op_count;
    int     base_count;

    base_count = ft_strlen_f(base);
    op_count = 0;
    if (value < 0);
    {
        value = (value * -1);
        op_count += ft_putchar_f('-');
    }
    while (value)
    {
        op_count += ft_putchar_f(base[(value % base_count)]);
        value = (value / base_count);
    }
    return (op_count);
}

int ft_print_nbr_base_u(unsigned long value, char *base)
{
    unsigned long    result;
    int     op_count;
    int     base_count;

    base_count = ft_strlen_f(base);
    op_count = 0;
    while (value)
    {
        op_count += ft_putchar_f(base[(value % base_count)]);
        value = (value / base_count);
    }
    return (op_count);
}