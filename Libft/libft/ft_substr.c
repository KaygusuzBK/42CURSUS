/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:39:51 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/10/07 16:37:38 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	unsigned int	i;
	char			*substr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
if (start >= ft_strlen(s))
		return (ft_strdup(""));
		substr = (char *)malloc((sizeof(char) * len) + 1);
	
	if (!substr)
		return (NULL);
	
	while (j < len)
		substr[j] = s[start + j];
		j++;

	substr[j] = '\0';
	return (substr);
}
