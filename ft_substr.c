/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <bakgun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:16:47 by bakgun            #+#    #+#             */
/*   Updated: 2023/07/10 15:14:02 by bakgun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
	{
		return (NULL);
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while ((len > i) && (start < ft_strlen(s)) && (s[start] != 0))
	{		
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
