/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:39:42 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/10/07 14:37:12 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int find)
{
	int	index;

	index = ft_strlen(str);
	while (index >= 0)
	{
		if (*((char *)(str + index)) == (char)(find))
			return ((char *)(str + index));
		index--;
	}
	return (NULL);
}
