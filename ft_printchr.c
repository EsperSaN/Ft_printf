/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eszu <eszu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:11:55 by pruenrua          #+#    #+#             */
/*   Updated: 2022/09/07 01:18:21 by eszu             ###   ########.fr       */
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

    if (str == NULL)
    {
        write(1, "(NULL)", 6);
        op_count += 6;   
    }
    while (*str)
    {
        op_count += ft_putchar_f(str);
        str++;
    }
    return (op_count);
}