/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <bakgun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:48:36 by bakgun            #+#    #+#             */
/*   Updated: 2023/07/05 11:31:14 by bakgun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	while (*s != '\0')
	{
		if (*s == c)
		{
			last_occurrence = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		last_occurrence = (char *)s;
	}
	return (last_occurrence);
}
