/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:30:55 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/10/05 22:38:57 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	index;

	index = -1;
	if (n > 0)
	{
		while (*((char *)(src + ++index)) && index < n - 1)
			*(dest + index) = *((char *)(src + index));
		*(dest + index) = '\0';
	}
	return (ft_strlen(src));
}
