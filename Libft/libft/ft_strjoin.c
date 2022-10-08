/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:04:13 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/10/07 11:37:43 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		total_len;
	char	*result;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = ft_calloc((total_len + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (*s1)
		*(result++) = *((char *)(s1++));
	while (*s2)
		*(result++) = *((char *)(s2++));
	return (result - total_len);
}
