/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:32:39 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/10/24 19:18:52 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_format(va_list *args, char c);
int	ft_int(int a);
int	ft_hex(unsigned int a, char c);
int	ft_point(unsigned long a, int sign);
int	ft_string(char *str);
int	ft_unsigned(unsigned int a);

#endif
