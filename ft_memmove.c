/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:14:44 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/10 21:23:21 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || num == 0)
		return (dest);
	if (d > s && d < s + num)
	{
		while (num-- > 0)
			d[num] = s[num];
	}
	else
	{
		while (i < num)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
