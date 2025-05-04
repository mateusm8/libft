/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:04:20 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:14:30 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (dest);
	while (i < num)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Hello World!";
	char	dst[50];

	ft_memcpy(dst, src, 5);
	printf("%s\n", dst);
}*/
