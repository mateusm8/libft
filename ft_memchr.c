/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:45:43 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/22 20:39:26 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	val;

	i = 0;
	str = (unsigned char *)ptr;
	val = (unsigned char)value;
	if (num == 0)
		return (NULL);
	while (i < num)
	{
		if (str[i] == val)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Letra A do teste";
	int		i = 96;

	printf("%p\n", ft_memchr(str, i, 10));
}*/