/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <bakgun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:32:51 by bakgun            #+#    #+#             */
/*   Updated: 2023/07/04 10:49:46 by bakgun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*p;

	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	while (num)
	{
		*p = value;
		p++;
		num--;
	}
	return (ptr);
}
