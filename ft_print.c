/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eszu <eszu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:13:26 by pruenrua          #+#    #+#             */
/*   Updated: 2022/09/07 22:12:19 by eszu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
    int i;
    int op_count;
    va_list argu;

    op_count = 0;
    i = 0;
    va_start (argu, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == 'c')
                op_count += ft_putchar_f(va_arg(argu,int));
            else if (str[i] == 's')
                op_count += ft_putstring_f(va_arg(argu,char *));
            else if (str[i] == 'p')
                op_count += ft_print_nbr_base_u(va_arg(argu,unsigned long),"0123456789abcdef");
            else if (str[i] == 'd')
                op_count += ft_print_nbr_base(va_arg(argu,int),"0123456789");
            else if (str[i] == 'i')
                op_count += ft_print_nbr_base(va_arg(argu,long),"0123456789");
            else if (str[i] == 'u')
                op_count += ft_print_nbr_base_u(va_arg(argu,unsigned long),"0123456789");
            else if (str[i] == 'x')
                op_count += ft_print_nbr_base_u(va_arg(argu,unsigned long),"0123456789abcdef");
            else if (str[i] == 'X')
                op_count += ft_print_nbr_base_u(va_arg(argu,unsigned long),"0123456789ABCDEF");
            else if (str[i] == '%')
                op_count += write(1, "%", 1);
        }
        else
            op_count += ft_putchar_f(str[i]);
        i++;
    }
    va_end (argu);
    return (op_count);
}

int main()
{
    ft_printf("%d hello \n",-123456);
    
    printf("%d real \n",-123456);
    //ft_printf("\n");
    //printf("%s hello2 \n start","START");

    //ft_putstring_f("STARTsss");
}