/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:47:22 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/23 18:48:13 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (size != 0 && num > (size_t) - 1 / size)
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, num * size);
	return (ptr);
}

/*int	main(void)
{
	size_t count = 5;
	size_t size = sizeof(int);
	size_t i;

	int *arr = (int *)ft_calloc(count, size);

	i = 0;
	while (i < count)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	return (0);
}*/
