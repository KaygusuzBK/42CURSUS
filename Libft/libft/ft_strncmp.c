/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:34:53 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/10/07 14:32:26 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
		if (*((unsigned char *)(s1++)) != *((unsigned char *)(s2++)))
			return (*((unsigned char *)(--s1)) - *((unsigned char *)(--s2)));
	return (0);
}
/*
n kadarını karşılaştırıyor. n kadarı aynıysa 0 döndürüyor.
*/
