/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 03:14:07 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/10/07 15:24:08 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		i++;
	}
	while (i--)
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
	return (dst);
}
