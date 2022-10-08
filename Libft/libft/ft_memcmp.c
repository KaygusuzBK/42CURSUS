/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:14:04 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/10/07 15:27:04 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
		if (*((unsigned char *)(s1++)) != *((unsigned char *)(s2++)))
			return (*((unsigned char *)(--s1)) - *((unsigned char *)(--s2)));
	return (0);
}
