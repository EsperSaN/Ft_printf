/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eszu <eszu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:55:31 by pruenrua          #+#    #+#             */
/*   Updated: 2022/09/08 23:57:50 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_strlen_f(char *str);
int		ft_putchar_f(int c);
int		ft_putstring_f(char *str);
int		ft_nbr_base(long value, char *base);
int		ft_nbr_base_u(unsigned long value, char *base, int mode);

#endif
